/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 10:26:22 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 18:36:07 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	// insisde :
	Point a(10, 10);
	Point b(10, 10);
	Point c(10, 10);
	Point p(0, 0);
	// outside :
	//Point a(0, 0);
	//Point b(10, 0);
	//Point c(5, 10);
	//Point p(20, 5);
	if (bsp(a, b, c, p))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;

	return 0;
}
