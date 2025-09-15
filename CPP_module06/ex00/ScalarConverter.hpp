/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:27:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 11:28:38 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iomanip>


class ScalarConverter
{
	private:
		template <typename T>
		static void	print(T value)
		{
			// char
			if (std::isnan(value) || value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
				std::cout << "char : impossible\n";
			else if (!std::isprint(static_cast<char>(value)))
				std::cout << "char : Non displayable\n";
			else
				std::cout << "char : '" << static_cast<char>(value) << "'\n";

			// int
			if (std::isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
				std::cout << "int : impossible\n";
			else
				std::cout << "int : " << static_cast<int>(value) << std::endl;

			// float
			float	f = static_cast<float>(value);
			std::cout << "float : " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;

			// double
			std::cout << "double : " << static_cast<double>(value) << std::endl;
		}
	public:

		// OCF
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter&	operator=(const ScalarConverter& other);
		~ScalarConverter();

		// helper function
		static void	convert(const std::string&	name);
};

