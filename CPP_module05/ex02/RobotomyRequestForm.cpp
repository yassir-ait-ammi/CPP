/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:21:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/08 11:58:00 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */)
	: target("target (default)")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: target(other.target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	target = other.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
	: target(name)
{
}

void	RobotomyRequestForm::execute(Bureaucrat const& f) const
{
	if (!getSign())
		throw (Bureaucrat::NotSignedException());
	if (f.GetGrade() > ExecGrade)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << "drilling noises drrrrrrinnng.....\n";
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << target << "> has been robotomized successfully\n";
	else
		std::cout << target << "robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
