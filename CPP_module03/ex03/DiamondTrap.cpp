/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:57:36 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/28 13:32:03 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "__clap_name"), FragTrap(), ScavTrap(), name(name)
{
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << this->name << " has been created\n";
}

void	DiamondTrap::WhoAmI()
{
	std::cout << "DiamondTrap this is my name : " << this->name
		<< ", and this is my ClapTrap name : " << ClapTrap::name << "\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " has been destroyed!\n";
}
