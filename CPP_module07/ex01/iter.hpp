/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:08:36 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 16:22:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>

void	add(int& nb)
{
	nb += 1;
	std::cout << nb << std::endl;
}

void	print(const char *&str)
{
	std::cout << str << std::endl;
}

void	upper(char *&str)
{
	for (size_t i = 0; i < strlen(str); i++)
		str[i] = toupper(str[i]);
}

template <typename T>
void	iter(T* a, int size, void	(*f)(T&))
{
	for (int i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void	iter(T* a, int size, void	(*f)(const T&))
{
	for (int i = 0; i < size; i++)
		f(a[i]);
}
