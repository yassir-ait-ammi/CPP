/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 13:26:52 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "DOG";
	std::cout << getType() << " constructors has been called\n";
}

Dog::Dog(const Dog& other)
{
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof\n";
}

Dog::~Dog()
{
	std::cout << getType() << " destructors has been called\n";
}
