/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/27 09:28:06 by yaait-am         ###   ########.fr       */
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
