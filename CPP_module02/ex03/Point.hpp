/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:33:43 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 18:27:38 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& other);
		Point& operator=(const Point& other);
		Fixed	GetX() const;
		Fixed	GetY() const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
