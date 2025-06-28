/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:45:28 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/27 10:00:30 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);

	Zombie* hord = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << name << "_" << i;
		hord[i].setname(oss.str());
	}
	return (hord);
}
