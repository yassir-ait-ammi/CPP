/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 09:24:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/28 13:35:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap&	operator=(const ScavTrap &other);
		ScavTrap(const std::string& name);
		void	attack(std::string target);
		void guardGate();
		~ScavTrap();
};

#endif
