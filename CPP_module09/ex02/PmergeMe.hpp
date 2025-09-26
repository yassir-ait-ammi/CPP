/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:02:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/26 10:11:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <sys/time.h>
#include <ctime>
#include <deque>
#include <iomanip>
#include <algorithm>

class PmergeMe
{
	private:
		std::vector<int>	vect;
		std::deque<int>		deque;
	public:

		// OCF
		PmergeMe(/* args */);
		PmergeMe(const PmergeMe& other);
		PmergeMe&	operator=(const PmergeMe& other);
		~PmergeMe();

		// helper_function
		size_t	get_size() const;
		PmergeMe(std::string	str);
		std::vector<int>	split(std::string str);
		template <typename T>
		T	Jacobsthal_numbers(const T&	losers);

		// vvector
		std::vector<int> const	&getvect() const;
		void	sort_vect();
		void	print_vect() const;

		// deque
		void	sort_deque();
		void	print_deque() const;
		template <typename T>
		void	sort_container(T &deque);
};

