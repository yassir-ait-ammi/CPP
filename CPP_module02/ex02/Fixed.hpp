/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 19:02:24 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 15:42:44 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int NumberValue;
		static const int Bits;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int value);
		Fixed(const float value);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits() const;
		void setRawBits(int const raw);

		// comparison
		bool operator>(const Fixed other) const;
		bool operator<(const Fixed other) const;
		bool operator<=(const Fixed other) const;
		bool operator>=(const Fixed other) const;
		bool operator==(const Fixed other) const;
		bool operator!=(const Fixed other) const;

		// arithmetic
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		// increment/decrement
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// function
		static Fixed& min(Fixed& one, Fixed& two);
		static const Fixed& min(const Fixed& one, const Fixed& two);
		static Fixed& max(Fixed& one, Fixed& two);
		static const Fixed& max(const Fixed& one, const Fixed& two);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
