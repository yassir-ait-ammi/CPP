/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yassir.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:11:20 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 15:04:47 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T&	min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T&	max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}
