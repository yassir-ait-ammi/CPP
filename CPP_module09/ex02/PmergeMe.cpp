/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:06:47 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/30 08:50:52 by yaait-am         ###   ########.fr       */
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

//vector

std::vector<int> const	&PmergeMe::getvect() const
{
	return (vect);
}

void	PmergeMe::sort_vect()
{
	sort_vect(this->vect);
}

std::vector<int> PmergeMe::Jacobsthal_numbers(const std::vector<int>& losers)
{
	std::vector<int> jacob;
	std::vector<int> result;

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

size_t	PmergeMe::get_size() const
{
	return (vect.size());
}

void	PmergeMe::makepairs(std::vector<std::pair<int, int> >& pairs, size_t size)
{
	if (size < 2 || pairs.empty()) return;

	for (size_t i = 0; i + size <= pairs.size(); i += size)
	{
		size_t	mid = i + size / 2;
		if (pairs[mid - 1].second > pairs[i + size - 1].second)
		{
			for (size_t j = 0; j < size / 2; j++)
				std::swap(pairs[i + j], pairs[mid + j]);
		}
	}
}

void	PmergeMe::sort_vect(std::vector<int> &container)
{
	if (container.size() <= 1) return ;

	std::vector<std::pair<int , int> > pairs;
	size_t	i = 0;
	for (; i + 1 < container.size() ; i += 2)
	{
		int a = container[i];
		int b = container[i + 1];
		if (a > b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}
	bool leftover = false;
	int left;
	if (i < container.size())
	{
		leftover = true;
		left = container[i];
	}
	size_t size = 1;
	while (size <= container.size() / 2)
	{
		makepairs(pairs, size);
		size *= 2;
	}
	std::vector<int>	main;
	std::vector<int>	pend;
	main.push_back(pairs[0].first);
	main.push_back(pairs[0].second);

	for (size_t j = 1; j < pairs.size(); j++)
	{
		main.push_back(pairs[j].second);
		pend.push_back(pairs[j].first);
	}
	std::sort(main.begin(), main.end());
	std::vector<int> index = Jacobsthal_numbers(pend);
	for (size_t j = 0; j < index.size(); j++)
	{
		std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), pend[index[j]]);
		main.insert(it, pend[index[j]]);
	}
	if (leftover == true)
	{
		std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), left);
		main.insert(it, left);
	}
	container = main;
}



// deque

void	PmergeMe::makepairs(std::deque<std::pair<int, int> >& pairs, size_t size)
{
	if (size < 2 || pairs.empty()) return;
	for (size_t i = 0; i + size <= pairs.size(); i += size)
	{
		size_t mid = i + size / 2;
		if (pairs[mid - 1].second > pairs[i + size - 1].second)
		{
			for (size_t j = 0; j < size / 2; j++)
				std::swap(pairs[i + j], pairs[mid + j]);
		}
	}

}

std::deque<int> PmergeMe::Jacobsthal_numbers(const std::deque<int>& losers)
{
	std::deque<int> jacob;
	std::deque<int> result;

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

void	PmergeMe::sort_deque()
{
	sort_deque(this->deque);
}

void	PmergeMe::sort_deque(std::deque<int> &container)
{
	if (container.size() <= 1) return ;

	std::deque<std::pair<int , int> > pairs;
	size_t	i = 0;
	for (; i + 1 < container.size() ; i += 2)
	{
		int a = container[i];
		int b = container[i + 1];
		if (a > b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}
	bool leftover = false;
	int left;
	if (i < container.size())
	{
		leftover = true;
		left = container[i];
	}
	size_t size = 1;
	while (size <= container.size() / 2)
	{
		makepairs(pairs, size);
		size *= 2;
	}
	std::deque<int>	main;
	std::deque<int>	pend;
	main.push_back(pairs[0].first);
	main.push_back(pairs[0].second);

	for (size_t j = 1; j < pairs.size(); j++)
	{
		main.push_back(pairs[j].second);
		pend.push_back(pairs[j].first);
	}
	std::sort(main.begin(), main.end());
	std::deque<int> index = Jacobsthal_numbers(pend);
	for (size_t j = 0; j < index.size(); j++)
	{
		std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), pend[index[j]]);
		main.insert(it, pend[index[j]]);
	}
	if (leftover == true)
	{
		std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), left);
		main.insert(it, left);
	}
	container = main;
}

void	PmergeMe::print_deque() const
{
	for (size_t i = 0; i < deque.size(); i++)
		std::cout << " " << deque[i] << " ";
}
