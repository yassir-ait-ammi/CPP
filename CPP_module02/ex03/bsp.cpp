/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:53:11 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/25 15:09:12 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area_size(Point a, Point b, Point c)
{
	float area = (a.GetX().toFloat() * (b.GetY().toFloat() - c.GetY().toFloat()) +
		b.GetX().toFloat() * (c.GetY().toFloat() - a.GetY().toFloat()) +
		c.GetX().toFloat() * (a.GetY().toFloat() - b.GetY().toFloat()));
	(area < 0) ? area *= (-1) : area *= 1;
	return (0.5f * area);
}

bool bsp(Point a, Point b, Point c, Point p)
{
	float Total = area_size(a, b, c);
	float T1 = area_size(a, b, p);
	float T2 = area_size(c, b, p);
	float T3 = area_size(a, c, p);
	if (Total == T1 + T2 + T3)
		return (true);
	return (false);
}
