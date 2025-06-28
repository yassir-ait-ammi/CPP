/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:22:21 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 19:22:34 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << getType() << " constructors has been called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Moo Moo Moo\n";
}

WrongCat::~WrongCat()
{
	std::cout << getType() << " destructors has been called\n";
}

