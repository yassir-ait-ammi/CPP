/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:25:27 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/16 11:00:41 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int	max;
	public:

		// OCF
		Span();
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		//HELPER_FUNCTION
		Span(unsigned int n);
		void	addNumber(int nb);
		int	shortestSpan();
		int	longestSpan();
};

