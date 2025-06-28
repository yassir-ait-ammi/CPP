/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/27 09:31:01 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* b[100];
	for (int i = 0; i < 50; i++)
		b[i] = new Dog();
	for (int i = 50; i < 100; i++)
		b[i] = new Cat();
	for (int i = 0; i < 100; i++)
	{
		std::cout << b[i]->getType() << " sound : ";
		b[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
		delete (b[i]);
	return 0;
}
