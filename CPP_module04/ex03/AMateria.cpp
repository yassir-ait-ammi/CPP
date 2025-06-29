/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:18:02 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 16:17:10 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const AMateria& other)
{
	this->type = other.type;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

AMateria::~AMateria()
{}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria::AMateria(const std::string& type)
{
	this->type = type;
}

std::string const&	AMateria::getType() const
{
	return (type);
}
