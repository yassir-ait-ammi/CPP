/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:40:00 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 13:51:57 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Bits = 8;

Fixed::Fixed()
	: NumberValue(0)
{
	std::cout << "Default constructor called\n";
}


Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->NumberValue = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->NumberValue;
}

void Fixed::setRawBits( int const raw )
{
	NumberValue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
