/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:45:02 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 15:08:32 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
: name (name)
{
	std::cout << name << ": is born!\n";
}

Zombie::Zombie()
{
	std::cout << "Unnamed zombie is born!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << ": is destroyed!\n";
}
