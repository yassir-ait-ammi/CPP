/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:21:37 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/08 11:57:54 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */)
	:target ("target (Default)")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
	: target(name)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: target (other.target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	target = other.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& f) const
{
	if (!getSign())
		throw (Bureaucrat::NotSignedException());
	if (f.GetGrade() > ExecGrade)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << target << "has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

