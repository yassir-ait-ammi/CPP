/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:20:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 14:36:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	void announce( void );
	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
