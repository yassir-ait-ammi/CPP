/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:22:33 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/20 11:31:32 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n"
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n"
			<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}


Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
