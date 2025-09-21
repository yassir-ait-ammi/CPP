/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:04:12 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 10:53:31 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>

class RPN
{
	private:
		std::stack<int>	data;
	public:

		// OCF
		RPN();
		RPN(const RPN& other);
		RPN&	operator=(const RPN& other);
		~RPN();

		// HELPER_FUNCTION
		RPN(std::string name);
		bool is_perator(char c);
};

