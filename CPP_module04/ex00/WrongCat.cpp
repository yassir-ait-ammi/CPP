/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:22:21 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 13:32:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << getType() << " constructors has been called\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Moo Moo Moo\n";
}

WrongCat::~WrongCat()
{
	std::cout << getType() << " destructors has been called\n";
}

