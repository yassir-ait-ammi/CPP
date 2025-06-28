/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:23:41 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 19:23:53 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructors has been called\n";
}

Animal::Animal(const Animal& other)
	: type(other.type)
{}

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
