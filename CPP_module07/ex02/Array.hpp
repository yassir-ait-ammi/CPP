/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:10:17 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/15 18:30:00 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	len;
		T				*data;
	public:

		// OCF
		Array()
			: len(0), data(NULL)
		{}
		Array(const Array& other)
			: len(other.len)
		{
			if (len > 0)
			{
				data = new T[len];
				for (unsigned int i = 0; i < len; i++)
					data[i] = other.data[i];
			}
			else
				data = NULL;
		}
		Array&	operator=(const Array& other)
		{
			if (this != &other)
			{
				delete [] (data);
				data = new T[other.len];
				len = other.len;
				if (len > 0)
				{
					for (unsigned int i = 0; i < other.len; i++)
						data[i] = other.data[i];
				}
				else
					data = NULL;
			}
			return (*this);
		}
		~Array()
		{
			delete [] (data);
		}

		// HELPER_FUNCTION
		Array(unsigned int n)
			: len(n), data(new T[n])
		{}
		T&	operator[](unsigned int nb)
		{
			if (nb >= len)
				throw std::out_of_range("Index out of range");
			return (data[nb]);
		}
		unsigned int	size() const
		{
			return (len);
		}
};

