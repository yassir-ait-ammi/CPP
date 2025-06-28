/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:05:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 14:57:13 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap player1("YASSIR");
	player1.attack("BOOT");
	player1.beRepaired(10);
	player1.takeDamage(20);
	player1.takeDamage(10);
	player1.guardGate();
	player1.WhoAmI();
}
