/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:40:08 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/18 16:58:51 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
