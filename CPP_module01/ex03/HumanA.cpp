/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:39:26 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 20:25:33 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_one, Weapon weapon)
	: Type (new_one) , wep (weapon)
{}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << Type << " attacks with their " << wep.getType() << "\n";
}
