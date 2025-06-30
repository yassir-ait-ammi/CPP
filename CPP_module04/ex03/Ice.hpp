/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:28:47 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/30 13:17:12 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice
	: public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		Ice&	operator=(const Ice& other);
		virtual ~Ice();

		AMateria*	clone() const;
		void use(ICharacter& target);
};

#endif
