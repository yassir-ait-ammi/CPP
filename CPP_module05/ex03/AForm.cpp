/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:03:39 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/14 09:22:06 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(/* args */)
	: Name("Default"), Sign(false), S_Grade(150), E_Grade(1)
{
}

AForm::AForm(const AForm& other)
	: Name(other.Name), Sign(other.Sign), S_Grade(other.S_Grade), E_Grade(other.E_Grade)
{
	if (S_Grade < 1 || E_Grade < 1)
		throw AForm::GradeTooHighException();
	if (S_Grade > 150 || E_Grade > 150)
		throw AForm::GradeTooLowException();
}

AForm&	AForm::operator=(const AForm& other)
{

	if (this != &other)
		*this = other;
	return (*this);
}

AForm::AForm(const std::string& _name, bool sign, const int s_grade, const int e_grade)
	: Name(_name), Sign(sign), S_Grade(s_grade), E_Grade(e_grade)
{
	if (S_Grade < 1 || E_Grade < 1)
		throw AForm::GradeTooHighException();
	if (S_Grade > 150 || E_Grade > 150)
		throw AForm::GradeTooLowException();
}

void	AForm::beSigned(Bureaucrat Worker)
{
	if (Worker.GetGrade() <= S_Grade)
		Sign = true;
	else
		throw (AForm::GradeTooLowException());
}

std::string		AForm::getName() const
{
	return (Name);
}

bool	AForm::getSign() const
{
	return (Sign);
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!Sign)
		throw Bureaucrat::NotSignedException();
	if (executor.GetGrade() > E_Grade)
		throw Bureaucrat::GradeTooLowException();
}

AForm::~AForm()
{
}
