/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:06:47 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/26 10:21:18 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	vect = other.vect;
	deque = other.deque;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		vect = other.vect;
		deque = other.deque;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(std::string	str)
{
	vect = split(str);
}

std::vector<int>	PmergeMe::split(std::string str)
{
	std::string	tmp;
	std::vector<int>	res;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (isspace(str[i]))
		{
			if(!tmp.empty())
			{
				res.push_back(std::atol(tmp.c_str()));
				deque.push_back(std::atol(tmp.c_str()));
			}
			tmp.clear();
		}
		else
			tmp += str[i];
	}
	if (!tmp.empty())
	{
		res.push_back(std::atol(tmp.c_str()));
		deque.push_back(std::atol(tmp.c_str()));
	}
	return (res);
}

std::vector<int> const	&PmergeMe::getvect() const
{
	return (vect);
}

void	PmergeMe::sort_vect()
{
	sort_container(this->vect);
}

template <typename T>
T PmergeMe::Jacobsthal_numbers(const T& losers)
{
	T jacob;
	T result;

	if (losers.empty())
		return result;
	jacob.push_back(0);
	if (losers.size() > 1)
		jacob.push_back(1);
	size_t i = 2;
	while (true)
	{
		if (jacob.size() < 2)
			break;
		int push = jacob[i - 1] + 2 * jacob[i - 2];
		if (push >= (int)losers.size())
			break;
		jacob.push_back(push);
		i++;
	}
	for (size_t j = 0; j < jacob.size(); j++)
		result.push_back(jacob[j]);
	for (size_t k = losers.size(); k-- > 0; )
	{
		if (std::find(jacob.begin(), jacob.end(), k) == jacob.end())
			result.push_back(k);
	}
	return result;
}

void	PmergeMe::print_vect() const
{
	for (size_t i = 0; i < vect.size(); i++)
		std::cout << " " << vect[i] << " ";
}

void	PmergeMe::sort_deque()
{
	sort_container(this->deque);
}

void	PmergeMe::print_deque() const
{
	for (size_t i = 0; i < deque.size(); i++)
		std::cout << " " << deque[i] << " ";
}

size_t	PmergeMe::get_size() const
{
	return (vect.size());
}

template <typename T>
void	PmergeMe::sort_container(T &deque)
{
	if (deque.size() <= 1)
		return ;
	T	winners;
	T	losers;

	for (size_t i = 0; i + 1 < deque.size(); i+= 2)
	{
		if (deque[i] < deque[i + 1])
		{
			winners.push_back(deque[i + 1]);
			losers.push_back(deque[i]);
		}
		else
		{
			winners.push_back(deque[i]);
			losers.push_back(deque[i + 1]);
		}
	}
	bool	hasleftover = false;
	int	leftover;
	if (deque.size() % 2 != 0)
	{
		leftover = deque.back();
		hasleftover = true;
	}
	sort_container(winners);
	T	oreder = Jacobsthal_numbers(losers);
	for (size_t i = 0; i < losers.size(); i++)
	{
		typename T::iterator pos = std::lower_bound(winners.begin(), winners.end(), losers[i]);
		winners.insert(pos, losers[i]);
	}
	if (hasleftover)
	{
		typename T::iterator pos = std::lower_bound(winners.begin(), winners.end(), leftover);
		winners.insert(pos, leftover);
	}
	deque = winners;
}
