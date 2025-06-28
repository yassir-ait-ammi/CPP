/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:45:15 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 15:20:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	Zombie(void);
	void announce( void );
	void	setname(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
