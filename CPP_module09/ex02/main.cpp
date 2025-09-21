/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:02:32 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/21 13:02:55 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double get_time_us()
{
	timespec t;
	clock_gettime(CLOCK_MONOTONIC, &t);
	return t.tv_sec * 1e6 + t.tv_nsec / 1e3;
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Error: ./PmergeMe number to sort" << std::endl;
		return (1);
	}
	std::string str;
	for (int i = 1; i < ac; i++)
	{
		for (size_t j = 0; j < std::strlen(av[i]); j++)
		{
			if (av[i][j] && !isdigit(av[i][j]) && !isspace(av[i][j]) && av[i][j] != '+')
			{
				std::cerr << "Error\nInvlid char" << std::endl;
				return (1);
			}
		}
		str += " ";
		str += av[i];
	}
	PmergeMe a(str);
	// vector
	std::cout << "Before: ";
	a.print_vect();
	double	start = get_time_us();
	a.sort_vect();
	double	end = get_time_us();
	double time = double(end - start);
	std::cout << "\nAfter:  ";
	a.print_vect();
	std::cout << "\nTime to process a range of " << a.get_size() <<" elements with std::vector : "
		<< std::fixed << std::setprecision(5)<< time << " us\n";

	// deque
	start = get_time_us();
	a.sort_deque();
	end = get_time_us();
	time = double(end - start);
	std::cout << "Time to process a range of " << a.get_size() <<" elements with std::deque : "
		<< std::fixed << std::setprecision(5)<< time << " us\n";
	return (0);
}
