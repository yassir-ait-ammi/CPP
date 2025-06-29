/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:07:20 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/29 18:21:00 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{}

ICharacter::ICharacter(const ICharacter& other)
{
	*this = other;
}

ICharacter&	ICharacter::operator=(const ICharacter& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

ICharacter::~ICharacter()
{}
