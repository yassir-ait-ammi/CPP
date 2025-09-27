/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:40:08 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/27 09:54:19 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

std::string trim(const std::string &s)
{
	size_t start = 0;
	size_t end = s.size();
	while (start < s.size() && isspace(s[start]))
		start++;
	while (end > start && isspace(s[end - 1]))
		end--;
	return s.substr(start, end - start);
}

int	is_valid_date(std::string& date)
{
	date = trim(date);
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	for (size_t i = 0; i < date.size(); i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!std::isdigit(date[i]))
			return (false);
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int mouth = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (mouth < 1 || mouth > 12)
		return (false);
	int dayinMouthe[] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	if (isLeapYear(year)) dayinMouthe[1] = 29;
	if (day < 1 || day > dayinMouthe[mouth - 1])
		return (false);
	return (true);
}

int	is_valid_value(std::string& value)
{
	value = trim(value);
	if (value.empty())
		return (false);
	bool	found_dot = false;
	size_t i = 0;
	if (value[i] == '+')
		i++;
	for (; i < value.size(); i++)
	{
		if (value[i] == '.')
		{
			if (found_dot)
				return (false);
			found_dot = true;
		}
		else if (!std::isdigit(value[i]))
			return (false);
	}
	return (true);
}

BitcoinExchange::BitcoinExchange()
{
	filloutData();
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	BitcoinExchange::find_data(std::string filename)
{
	if (!valid)
		return ;
	std::ifstream	file;
	std::string	line;
	bool	first = true;
	file.open(filename.c_str(), std::ios::in);
	if (!file)
	{
		std::cerr << "Error : could not open file." << std::endl;
		return ;
	}
	while (getline(file, line))
	{
		if (first)
		{
			first = false;
			continue ;
		}
		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cerr << "Error: bad line format => " << line << std::endl;
			continue ;
		}
		std::string	date = line.substr(0, pos);
		std::string	value_str = line.substr(pos + 1);

		if (!is_valid_date(date))
		{
			std::cerr << "Error: bad line format => " << line << std::endl;
			continue ;
		}
		if (!is_valid_value(value_str))
		{
			std::cerr << "Error: bad line format => " << line << std::endl;
			continue ;
		}
		char *end;
		double	value = std::strtod(value_str.c_str(), &end);
		if (*end != '\0')
		{
			std::cerr << "Error: bad number => " << value_str << std::endl;
			continue ;
		}
		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (value > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue ;
		}
		std::map<std::string, double>::iterator it = data.lower_bound(date);
		if (it->first != date)
		{
			if (it == data.begin())
			{
				std::cerr << "Error: no earlier date found for " << date << std::endl;
				continue ;
			}
			it--;
		}
		double result = value * it->second;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
	file.close();
}

void	BitcoinExchange::filloutData()
{
	std::ifstream	file;
	std::string	line;
	file.open("data.csv", std::ios::in);
	if (!file)
	{
		valid = false;
		std::cerr << "Error : could not open file." << std::endl;
		return ;
	}
	bool	first = true;
	while (getline(file, line))
	{
		if (first)
		{
			first = false;
			continue ;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << "Error: bad line format => " << line << std::endl;
			continue ;
		}
		std::string	date = line.substr(0, pos);
		std::string	value_str = line.substr(pos + 1);

		char *end;
		double	value = std::strtod(value_str.c_str(), &end);
		if (*end != '\0')
		{
			std::cerr << "Error: bad number => " << value_str << std::endl;
			continue ;
		}
		data[date] = value;
	}
	valid = true;
	file.close();
}
