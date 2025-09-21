/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:02:14 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/21 11:40:54 by yaait-am         ###   ########.fr       */
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

		// vvector
		std::vector<int> const	&getvect() const;
		void	sort_vect();
		void	sort_vect(std::vector<int> &vect);
		void	print_vect() const;

		// deque
		void	sort_deque();
		void	sort_deque(std::deque<int> &deque);
		void	print_deque() const;
};

