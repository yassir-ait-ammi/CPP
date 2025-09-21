/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:50:19 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 10:53:58 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}

RPN&	RPN::operator=(const RPN& other)
{
	data = other.data;
	return (*this);
}

RPN::RPN(const RPN& other)
	: data(other.data)
{
}

RPN::RPN(std::string name)
{
	for (size_t i = 0; i < name.size(); i++)
	{
		if (isspace(name[i]))
			continue ;
		if (isdigit(name[i]))
			data.push(name[i] - '0');
		else if (is_perator(name[i]))
		{
			if (data.size() < 2	)
			{
				std::cerr << "Error: not enough number" << std::endl;
				return ;
			}
			int b = data.top();
			data.pop();
			int a = data.top();
			data.pop();
			int result;
			if (name[i] == '+') result = a + b;
			else if (name[i] == '-') result = a - b;
			else if (name[i] == '*') result = a * b;
			else
			{
				if (b == 0)
				{
					std::cerr << "Error: division by zero" << std::endl;
					return ;
				}
				result = a / b;
			}
			data.push(result);
		}
		else
		{
			std::cerr << "Error: invalid character" << std::endl;
			return ;
		}
	}
	if (data.size() != 1)
	{
		std::cerr << "Error: it should be in Polish mathematical expression" << std::endl;
		return ;
	}
	std::cout << "Result :  " << data.top() << std::endl;
}

bool RPN::is_perator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}
