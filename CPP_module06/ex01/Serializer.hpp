/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:34:54 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 11:51:45 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

struct Data
{
	int	nb;
	std::string	name;
};

class Serializer
{
	private:

		// OCF
		Serializer();
		Serializer&	operator=(const Serializer& other)
		{
			(void)other;
			return (*this);
		}
		Serializer(const Serializer &other);
		~Serializer();
	public:

		// HELPER_FUNCTION
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
