/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:40:03 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 18:21:28 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
}

Cure::Cure(const Cure& other)
{
	this->type = other.type;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != & other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure()
{
}
