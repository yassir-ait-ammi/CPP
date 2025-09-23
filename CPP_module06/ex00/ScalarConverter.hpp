/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:27:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/23 09:36:59 by yaait-am         ###   ########.fr       */
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
		static void	print(T value);
	public:

		// OCF
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter&	operator=(const ScalarConverter& other);
		~ScalarConverter();

		// helper function
		static void	convert(const std::string&	name);
};

