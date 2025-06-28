/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:40:10 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 20:28:32 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string new_one)
{
	this->name = new_one;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string new_one)
{
	this->name = new_one;
}

const std::string& Weapon::getType() const {
	return (this->name);
}
