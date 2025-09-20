/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:28:39 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:57:46 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat tooHigh("Boss", 0);
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught custom exception: " << e.what();
	}
	try
	{
		Bureaucrat tooLow("Intern", 200);
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught custom exception: " << e.what();
	}
	Bureaucrat bob("Bob", 150);
	ShrubberyCreationForm shrub("home");
	try
	{
		bob.executeForm(shrub);
	}
	catch (std::exception& e)
	{
		std::cout << "Caught custom form exception: " << e.what();
	}
	try
	{
		bob.signForm(shrub);
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cout << "Caught custom form exception: " << e.what();
	}
	try
	{
		bob.executeForm(shrub);
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught custom form exception: " << e.what();
	}

	return 0;
}
