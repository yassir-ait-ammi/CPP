/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:13:31 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 18:33:24 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (char *c = av[i]; *c; c++)
		{
			if (*c >= 'a' && *c <= 'z')
				*c -= 32;
		}
		std::cout << av[i] << "";
		if (i < ac - 1)
			std::cout << " ";
	}
	return 0;
}
