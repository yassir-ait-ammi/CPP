/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:30:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/28 13:30:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_one)
	: ClapTrap(new_one)
{
	std::cout << "FragTrap " << name << " has been created\n";
}

FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " requests a positive high five!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed!\n";
}
