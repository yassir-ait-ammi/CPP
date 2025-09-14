/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:21:38 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/14 10:11:41 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

AForm*	Intern::makeForm(std::string Formname, std::string target)
{
	static const std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm*	Form[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == Formname)
		{
			std::cout << "Inter creates " << target << std::endl;
			for (int j = 0; j < 3; j++)
				if (j != i) delete Form[j];
			return (Form[i]);
		}
	}
	std::cout << "Intern couldn’t create form: " << Formname << std::endl;
	for (int j = 0; j < 3; j++)
		delete Form[j];
	return (NULL);
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern&		Intern::operator=(const Intern& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

Intern::~Intern()
{
}
