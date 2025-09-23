/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:49:35 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/22 18:35:17 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data d;
	d.nb = 42;
	d.name = "Hello Serializer!";

	std::cout << "Original Data pointer: " << &d << std::endl;

	// Serialize
	uintptr_t raw = Serializer::serialize(&d);
	std::cout << "Serialized value: " << raw << std::endl;

	// Deserialize
	Data* ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized Data pointer: " << ptr << std::endl;

	// Test equality
	if (ptr == &d)
		std::cout << "Success: Pointers are equal!" << std::endl;
	else
		std::cout << "Error: Pointers differ!" << std::endl;

	// Show data content
	std::cout << "Number: " << ptr->nb << ", Text: " << ptr->name << std::endl;

	return 0;
}
