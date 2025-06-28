/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Awesome_PhoneBook.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:22:46 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/17 15:05:31 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_PHONEBOOK_H
#define MY_AWESOME_PHONEBOOK_H

#define MAX_CONTACT 8
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;


	public:
		void setFirstName(const std::string& str) { firstName = str; }
		void setLastName(const std::string& str) { lastName = str; }
		void setNickname(const std::string& str) { nickname = str; }
		void setPhoneNumber(const std::string& str) { phoneNumber = str; }
		void setDarkestSecret(const std::string& str) { darkestSecret = str; }
		std::string getFirstName() const { return firstName; }
		std::string getLastName() const { return lastName; }
		std::string getNickname() const { return nickname; }
		std::string getPhoneNumber() const { return phoneNumber; }
		std::string getDarkestSecret() const { return darkestSecret; }
		void displayContact() const
		{
			std::cout << "First Name: " << firstName << "\n";
			std::cout << "Last Name: " << lastName << "\n";
			std::cout << "Nickname: " << nickname << "\n";
			std::cout << "Phone Number: " << phoneNumber << "\n";
			std::cout << "Darkest Secret: " << darkestSecret << "\n";
		}
};


class PhoneBook
{
	public:
		PhoneBook();
		Contact contacts[MAX_CONTACT];
		int	total;
		int	index;
		void	addcontact();
		void	searchcontact();
		~PhoneBook();
};

#endif
