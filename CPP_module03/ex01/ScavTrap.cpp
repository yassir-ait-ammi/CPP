/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 09:54:07 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/16 12:00:13 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been created\n";
}

ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed!\n";
}

void	ScavTrap::attack(std::string target)
{
	if (EnergyPoint <= 0 || HitPoint <= 0)
	{
		std::cout << "ScavTrap " << name
		<< " has no energy or is dead and can't repair!\n";
		return;
	}
	std::cout << "ScavTrap " << name << " attacks "
	<< target << ", causing " << AttackDamage
	<< " point of damage! Current Point : " << HitPoint << "\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode\n";
}

