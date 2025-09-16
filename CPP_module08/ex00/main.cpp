/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:15:56 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/16 10:23:17 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	try {
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "found : " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		std::vector<int>::iterator it = easyfind(v, 4);
		std::cout << "found : " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
