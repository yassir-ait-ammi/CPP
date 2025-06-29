/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:23:21 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 13:21:10 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "CAT";
	std::cout << getType() << " constructors has been called\n";
}

Cat::Cat(const Cat& other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow Meow\n";
}

Cat::~Cat()
{
	std::cout << getType() << " destructors has been called\n";
}
