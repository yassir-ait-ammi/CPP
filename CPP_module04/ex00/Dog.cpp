/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 19:23:14 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "DOG";
	std::cout << getType() << " constructors has been called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof\n";
}

Dog::~Dog()
{
	std::cout << getType() << " destructors has been called\n";
}
