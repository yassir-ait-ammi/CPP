/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/26 19:21:07 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete (i);
	delete (j);
	delete (meta);

	//Wrong
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	meta1->makeSound();
	delete (i1);
	delete (meta1);

	return 0;
}
