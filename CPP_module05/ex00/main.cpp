/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:28:39 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 16:02:02 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("yassir", 1);
		std::cout << a << std::endl;
		a.increment();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.result();
	}
	try
	{
		try
		{
			Bureaucrat b("ait ammi", 150);
			std::cout << b << std::endl;
			b.decrement();
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.result();
			throw;
		}
	}
	catch (...)
	{
		std::cout << "catch everything" << std::endl;
	}
}
