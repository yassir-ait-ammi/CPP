/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:44:00 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/23 09:38:02 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer&	Serializer::operator=(const Serializer& other)
{
	(void)other;
	return (*this);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& other)
{
	*this = other;
}

Serializer::~Serializer()
{
}
