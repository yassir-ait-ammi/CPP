/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:22:43 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 19:22:52 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructors has been called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: type(other.type)
{}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Meeh Meeh Meeh\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructors has been called\n";
}
