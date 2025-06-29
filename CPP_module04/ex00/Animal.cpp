/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:23:41 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 13:16:27 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructors has been called\n";
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "No sound for Animal\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructors has been called\n";
}
