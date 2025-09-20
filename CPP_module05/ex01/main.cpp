/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:28:39 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:52:26 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form	F("Form", false, 1, 150);
		Bureaucrat a("yassir", 1);
		std::cout << a << std::endl;
		F.beSigned(a);
		a.signForm(F);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		try
		{
			Bureaucrat b("ait ammi", 150);
			std::cout << b << std::endl;
			b.decrement();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what();
			throw;
		}
	}
	catch (...)
	{
		std::cout << "catch everything" << std::endl;
	}
}
