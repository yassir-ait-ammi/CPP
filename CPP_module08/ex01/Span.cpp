/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:59:00 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/16 11:00:21 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(/* args */)
{
}

Span::Span(const Span& other)
	: vec(other.vec), max(other.max)
{}
Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		vec = other.vec;
		max = other.max;
	}
	return (*this);
}

Span::~Span()
{
}

Span::Span(unsigned int n)
	: max(n)
{}
void	Span::addNumber(int nb)
{
	if (vec.size() == max)
		throw (std::runtime_error("The Span is full"));
	vec.push_back(nb);
}

int	Span::shortestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw std::runtime_error("The Span has only one number or less");
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	int span = tmp[tmp.size() - 1] - tmp[0];
	for (size_t i = 1; i < tmp.size(); i++)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < span)
			span = diff;
	}
	return (span);
}

int	Span::longestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw std::runtime_error("The Span has only one number or less");
	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());
	return (max - min);
}
