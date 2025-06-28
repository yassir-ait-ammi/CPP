/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:23:21 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/27 09:28:17 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "CAT";
	this->brain = new Brain();
	std::cout << getType() << " constructors has been called\n";
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = "this is a Cat!\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow Meow\n";
}

std::string	Cat::getBrain()
{
	return (brain->ideas[0]);
}

Cat::~Cat()
{
	delete (brain);
	std::cout << getType() << " destructors has been called\n";
}
