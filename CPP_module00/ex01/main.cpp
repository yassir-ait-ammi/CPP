/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:42:31 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/17 15:15:21 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "My_Awesome_PhoneBook.hpp"

std::string	to_upper_case(std::string& str)
{
	std::string res = str;
	for(int i = 0;res[i]; i++)
		res[i] = toupper(res[i]);
	return (res);
}

int main()
{
	PhoneBook	phone;
	std::string	cmd;
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, cmd);
		cmd = to_upper_case(cmd);
		if (std::cin.eof() || cmd == "EXIT")
			break ;
		if (cmd == "ADD")
			phone.addcontact();
		else if (cmd == "SEARCH")
			phone.searchcontact();
		else
			std::cout << "Invalid command.\n";
	}
	if (cmd != "EXIT")
		std::cout << "\n";
	return (0);
}
