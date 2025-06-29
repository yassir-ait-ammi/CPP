/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 13:27:04 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "DOG";
	this->brain = new Brain();
	std::cout << getType() << " constructors has been called\n";
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = "this is a Dog!\n";
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

std::string	Dog::getBrain()
{
	return(brain->ideas[0]);
}

Dog::~Dog()
{
	delete (brain);
	std::cout << getType() << " destructors has been called\n";
}
