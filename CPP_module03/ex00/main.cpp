/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:05:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/25 16:10:31 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap player1("YASSIR");
	player1.attack("BOOT");
	player1.beRepaired(10);
	player1.takeDamage(20);
	player1.takeDamage(10);
}
