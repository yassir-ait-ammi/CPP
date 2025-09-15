/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:14:35 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 12:21:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 5; i++) {
		Base* obj = generate();

		std::cout << "Identify by pointer: ";
		identify(obj);

		std::cout << "Identify by reference: ";
		identify(*obj);

		delete obj;
		std::cout << "----" << std::endl;
	}
	return 0;
}
