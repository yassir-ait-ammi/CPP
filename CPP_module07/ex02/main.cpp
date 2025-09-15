/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:25:26 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 18:28:48 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main()
{
	std::cout << "=== Empty Array ===" << std::endl;
	Array<int> empty;
	std::cout << "Size: " << empty.size() << std::endl;

	std::cout << "\n=== Int Array ===" << std::endl;
	Array<int> numbers(5);
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i * 10;

	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

	std::cout << "\n=== Copy Constructor ===" << std::endl;
	Array<int> copy(numbers);
	copy[0] = 999;
	std::cout << "Original first element: " << numbers[0] << std::endl;
	std::cout << "Copy first element: " << copy[0] << std::endl;

	std::cout << "\n=== String Array ===" << std::endl;
	Array<std::string> words(3);
	words[0] = "Hello";
	words[1] = "World";
	words[2] = "42";

	for (unsigned int i = 0; i < words.size(); i++)
		std::cout << words[i] << std::endl;

	std::cout << "\n=== Exception Test ===" << std::endl;
	try
	{
		std::cout << words[10] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
