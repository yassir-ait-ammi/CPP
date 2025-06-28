/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:40:00 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 15:51:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Bits = 8;

Fixed::Fixed()
	: NumberValue(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed(const int Value)
{
	std::cout << "Int constructor called\n";
	this->NumberValue = Value << Bits;
}

Fixed::Fixed(const float Value)
{
	std::cout << "Float constructor called\n";
	this->NumberValue = roundf(Value * (1 << Bits));
}

float Fixed::toFloat() const
{
	return (float(NumberValue) / (1 << Bits));
}

int	Fixed::toInt() const
{
	return (NumberValue >> Bits);
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

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
