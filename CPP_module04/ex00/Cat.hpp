/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:35:55 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/30 13:18:05 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat
	: public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		virtual ~Cat();

		void	makeSound() const;
};

#endif
