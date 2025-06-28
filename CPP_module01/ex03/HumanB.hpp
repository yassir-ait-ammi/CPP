/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 20:20:48 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	Type;
		Weapon* weapon;
	public:
		HumanB(std::string Type);
		void	setWeapon(Weapon& wep);
		void	attack(void);
		~HumanB();
};

#endif
