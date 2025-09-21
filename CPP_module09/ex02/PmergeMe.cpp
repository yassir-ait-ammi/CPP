/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:06:47 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/21 11:41:47 by yaait-am         ###   ########.fr       */
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
	sort_vect(this->vect);
}

void	PmergeMe::sort_vect(std::vector<int> &vect)
{
	if (vect.size() <= 1)
		return ;
	std::vector<int>	winners;
	std::vector<int>	losers;

	for (size_t i = 0; i + 1 < vect.size(); i+= 2)
	{
		if (vect[i] < vect[i + 1])
		{
			winners.push_back(vect[i + 1]);
			losers.push_back(vect[i]);
		}
		else
		{
			winners.push_back(vect[i]);
			losers.push_back(vect[i + 1]);
		}
	}
	bool	hasleftover = false;
	int	leftover;
	if (vect.size() % 2 != 0)
	{
		leftover = vect.back();
		hasleftover = true;
	}
	sort_vect(winners);
	for (size_t i = 0; i < losers.size(); i++)
	{
		std::vector<int>::iterator pos = std::lower_bound(winners.begin(), winners.end(), losers[i]);
		winners.insert(pos, losers[i]);
	}
	if (hasleftover)
	{
		std::vector<int>::iterator pos = std::lower_bound(winners.begin(), winners.end(), leftover);
		winners.insert(pos, leftover);
	}
	vect = winners;
}

void	PmergeMe::print_vect() const
{
	for (size_t i = 0; i < vect.size(); i++)
		std::cout << " " << vect[i] << " ";
}

void	PmergeMe::sort_deque()
{
	sort_deque(this->deque);
}

void	PmergeMe::sort_deque(std::deque<int> &deque)
{
	if (deque.size() <= 1)
		return ;
	std::deque<int>	winners;
	std::deque<int>	losers;

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
	sort_deque(winners);

	for (size_t i = 0; i < losers.size(); i++)
	{
		std::deque<int>::iterator pos = std::lower_bound(winners.begin(), winners.end(), losers[i]);
		winners.insert(pos, losers[i]);
	}
	if (hasleftover)
	{
		std::deque<int>::iterator pos = std::lower_bound(winners.begin(), winners.end(), leftover);
		winners.insert(pos, leftover);
	}
	deque = winners;
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
