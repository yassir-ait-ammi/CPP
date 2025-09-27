/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:29:26 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/27 09:29:38 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <map>
#include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	data;
		bool	valid;
	public:

		// OCF
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& other);

		// HELPRT_FUNCTION
		void	filloutData();
		void	find_data(std::string filename);
};

