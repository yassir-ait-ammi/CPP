/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:45:43 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/19 15:22:30 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie* one = zombieHorde(N, "Foo");
	if (one)
	{
		for (int i = 0; i < N; i++)
		{
			one[i].announce();
		}
		delete [] one;
	}
	return (0);
}
