/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:40:00 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 15:43:14 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Bits = 8;

Fixed::Fixed()
	: NumberValue(0)
{
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(const int Value)
{
	this->NumberValue = Value << Bits;
}

Fixed::Fixed(const float Value)
{
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
{}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed other) const
{
	if (this->NumberValue > other.NumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed other) const
{
	if (this->NumberValue < other.NumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed other) const
{
	if (this->NumberValue <= other.NumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed other) const
{
	if (this->NumberValue >= other.NumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed other) const
{
	if (this->NumberValue == other.NumberValue)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed other) const
{
	if (this->NumberValue != other.NumberValue)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed Result;
	Result.setRawBits(this->getRawBits() + other.getRawBits());
	return Result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed Result;
	Result.setRawBits(this->getRawBits() - other.getRawBits());
	return Result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed Result;
	int product = (int)(this->getRawBits()) * other.getRawBits();
	Result.setRawBits((int)(product >> Bits));
	return (Result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed Result;
	if (other.getRawBits() == 0)
	{
		std::cerr << "Error: Division by zero\n";
		return (*this);
	}
	int dividend = ((int)(this->getRawBits()) << Bits);
	int quotient = dividend / other.getRawBits();
	Result.setRawBits((int)(quotient));
	return (Result);
}


Fixed& Fixed::operator++(void)
{
	NumberValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	NumberValue++;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	NumberValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	NumberValue--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	return ((one > two) ? two : one);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	return ((one > two) ? two : one);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	return ((one < two) ? two : one);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	return ((one < two) ? two : one);
}
