/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:13 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/30 13:17:46 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog
	: public Animal
{
	private :
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		virtual ~Dog();

		void	makeSound() const;
		std::string	getBrain();
};

#endif
