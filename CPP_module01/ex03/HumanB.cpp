/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:39:02 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 20:22:28 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: Type(name), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << Type << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << Type << " has no weapon to attack with!\n";
}
