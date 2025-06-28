/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Awesome_PhoneBook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:18:16 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/17 15:54:27 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "My_Awesome_PhoneBook.hpp"

PhoneBook::PhoneBook() : total(0), index(0)
{}

PhoneBook::~PhoneBook()
{}

int	if_is_all_char(std::string cmd)
{
	for (int i = 0; cmd[i]; i++) if (!isalpha(cmd[i]) && !isspace(cmd[i])) return (0);
	return (1);

}

void	addphonenumber(Contact& contacts)
{
	int	i;
	std::string Phone = contacts.getPhoneNumber();
	std::cout << "Enter contact phone number: ";
	std::getline(std::cin, Phone);
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	for (i = 0; Phone[i]; i++)
		if (!isdigit(Phone[i])) break ;
	if (Phone[i])
	{
		std::cout << "the Phone number should be all digit\n";
		addphonenumber(contacts);
	}
	else
		contacts.setPhoneNumber(Phone);
}

void	addname(Contact& con)
{
	std::string	input;

	std::cout << "Enter contact first name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	if (!if_is_all_char(input))
	{
		std::cout << "the name should be all characters\n";
		addname(con);
	}
	else
		con.setFirstName(input);
}

void	addlastname(Contact& con)
{
	std::string input;

	std::cout << "Enter contact last name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	if (!if_is_all_char(input))
	{
		std::cout << "the last name should be all characters\n";
		addlastname(con);
	}
	else
		con.setLastName(input);
}

void	addnickname(Contact& con)
{
	std::string input;

	std::cout << "Enter contact nick name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	if (!if_is_all_char(input))
	{
		std::cout << "the nickname should be all characters\n";
		addnickname(con);
	}
	else
		con.setNickname(input);
}

void	adddarksecret(Contact& con)
{
	std::string input;

	std::cout << "Enter contact darkest secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	if (!if_is_all_char(input))
	{
		std::cout << "the secret should be all characters\n";
		adddarksecret(con);
	}
	else
		con.setDarkestSecret(input);
}

void PhoneBook::addcontact()
{
	addname(contacts[index]);
	addlastname(contacts[index]);
	addnickname(contacts[index]);
	addphonenumber(contacts[index]);
	adddarksecret(contacts[index]);
	index = (index + 1) % MAX_CONTACT;
	if (total < MAX_CONTACT)
		total++;
}

std::string print_what_need(const std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

void	PhoneBook::searchcontact()
{
	if (total == 0)
	{
		std::cout << "PhoneBook is empty.\n";
		return;
	}
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "\n";
	for (int i = 0; i < total; i++)
	{
		std::cout << std::setw(10) << i << "|"
			<< print_what_need(contacts[i].getFirstName()) << "|"
			<< print_what_need(contacts[i].getLastName()) << "|"
			<< print_what_need(contacts[i].getNickname()) << "\n";
	}
	std::cout << "Enter index to view details: ";
	std::string	input;
	std::getline(std::cin, input);
	if (input.length() != 1 || input[0] < '0' || input[0] > '7')
	{
		std::cout << "Invalid index.\n";
		return;
	}
	if (std::cin.eof())
	{
		std::cout << "\n";
		exit(1);
	}
	int i = input[0] - '0';
	if (i >= total)
	{
		std::cout << "No contact at this index.\n";
		return ;
	}
	std::cout << "First Name: " << contacts[i].getFirstName() << "\n";
	std::cout << "Last Name: " << contacts[i].getLastName() << "\n";
	std::cout << "Nickname: " << contacts[i].getNickname() << "\n";
	std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << "\n";
	std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << "\n";
}
