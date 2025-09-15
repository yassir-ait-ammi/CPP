/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:24:46 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 11:31:09 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}
void	ScalarConverter::convert(const std::string&	name)
{

	// char
	if (name.size() == 3 && name[0] == '\'' && name[name.size() - 1] == '\'')
	{
		print(name[1]);
		return ;
	}

	// float inf
	if (name == "nanf" || name == "-inff" || name == "+inff")
	{
		float f = name[0] == '-' ? -INFINITY : name[0] == '+' ? INFINITY : NAN;
		print(f);
		return ;
	}

	// double inf
	if (name == "nan" || name == "+inf" || name == "-inf")
	{
		double d = name[0] == '-' ? -INFINITY : name[0] == '+' ? INFINITY : NAN;
		print(d);
		return;
	}

	// float
	if (name[name.size() - 1] == 'f')
	{
		char	*end;
		float f = std::strtof(name.c_str(), &end);
		if (*end != 'f')
			return (std::cout << "Invalid float literal\n", void());
		print(f);
		return ;
	}

	// int
	char	*end;
	long	l = std::strtol(name.c_str(), &end, 10);
	if (*end == '\0')
		return (print(l));

	// double
	double	d = std::strtod(name.c_str(), &end);
	if (*end != '\0')
		return (std::cout << "Invalid literal\n", void());
	print(d);
}
