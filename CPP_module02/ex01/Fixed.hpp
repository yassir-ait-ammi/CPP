/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 19:02:24 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 15:00:18 by yaait-am         ###   ########.fr       */
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
		Fixed(const int Value);
		Fixed(const float Value);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
