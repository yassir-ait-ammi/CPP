/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:02:06 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 18:21:44 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(const Character& other)
{
	name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i]) this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
		{
			delete inventory[i];
			if (other.inventory[i]) inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

std::string const&	Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return;
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return;
	inventory[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete (inventory[i]);

}
