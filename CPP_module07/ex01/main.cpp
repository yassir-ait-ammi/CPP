/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:13:11 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 15:33:04 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << " -- array of int --" << std::endl;
	int a[4] = {1, 4, 6, 9};
	::iter(a, 4, add);
	std::cout << " -- array of string --" << std::endl;
	char str1[] = "hello";
	char str2[] = "world";
	char* p[2] = {str1, str2};
	::iter(p, 2, upper);
	std::cout << p[0] << " " << p[1] << std::endl;
}
