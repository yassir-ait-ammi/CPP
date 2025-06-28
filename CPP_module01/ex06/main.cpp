/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:22:19 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/22 10:11:23 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getlevel(std::string Level)
{
	if (Level == "DEBUG") return (0);
	else if (Level == "INFO") return (1);
	else if (Level == "WARNING") return (2);
	else if (Level == "ERROR") return (3);
	else return (-1);
}

std::string	to_upper_case(std::string str)
{
		std::string res = str;
		for(int i = 0;res[i]; i++)
				res[i] = toupper(res[i]);
		return (res);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Usage : ./harlFilter <level> \n", 1);
	std::string order = to_upper_case(av[1]);
	int level = getlevel(order);
	Harl harl;
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3 :
			harl.complain("ERROR");
			break;
		default:
			harl.complain("RANDOM");
	}
	return (0);
}
