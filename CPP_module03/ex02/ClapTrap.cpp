/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:38:22 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/28 13:41:30 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_one)
	: HitPoint(100),EnergyPoint(50), AttackDamage(20)
{
	name = new_one;
	std::cout << "ClapTrap " << new_one << " has been ceated\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (EnergyPoint <= 0 || HitPoint <= 0)
	{
		std::cout << "ClapTrap " << name
		<< " has no energy or is dead and can't repair!\n";
		return;
	}
	std::cout << "ClapTrap " << name << " attacks "
	<< target << ", causing " << AttackDamage
	<< " point of damage! Current Point : " << HitPoint << "\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoint <= 0)
	{
		std::cout << "ClapTrap " << name << " is already dead!\n";
		return ;
	}
	HitPoint -= amount;
	std::cout << "ClapTrap " << name << " took " << amount
	<< " of damage! Current Point : " << HitPoint << "\n";
	if (HitPoint <= 0)
		std::cout << "ClapTrap " << name << " is dead!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoint <= 0 || HitPoint <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy or is dead and can't repair!\n";
		return;
	}
	HitPoint += amount;
	std::cout << "ClapTrap " << name << " repairs itself with "
	<< amount << " HitPoint! Current Point : " << HitPoint << "\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed!\n";
}

ClapTrap::ClapTrap()
{}
