/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:52:47 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/24 16:53:00 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: x(0), y(0)
{
}

Point&	Point::operator=(const Point& other)
{
	(void) other;
	return (*this);
}

Point::Point(const float a, const float b)
	: x(a), y(b)
{}

Point::Point(const Point& other)
	: x(other.x), y(other.y)
{}

Fixed	Point::GetX() const
{
	return (x);
}

Fixed	Point::GetY() const
{
	return (y);
}

Point::~Point()
{}
