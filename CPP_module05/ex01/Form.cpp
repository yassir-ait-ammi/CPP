/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:53:51 by yaait-am          #+#    #+#             */
/*   Updated: 2025/08/27 11:03:18 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(/* args */)
	: Name("Default"), Sign(false), S_Grade(150), E_Grade(1)
{
}

Form::Form(const Form& other)
	: Name(other.Name), Sign(other.Sign), S_Grade(other.S_Grade), E_Grade(other.E_Grade)
{
	if (S_Grade < 1 || E_Grade < 1)
		throw Form::GradeTooHighException();
	if (S_Grade > 150 || E_Grade > 150)
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(const Form& other)
{

	if (this != &other)
		*this = other;
	return (*this);
}

Form::Form(const std::string& _name, bool sign, const int s_grade, const int e_grade)
	: Name(_name), Sign(sign), S_Grade(s_grade), E_Grade(e_grade)
{
	if (S_Grade < 1 || E_Grade < 1)
		throw Form::GradeTooHighException();
	if (S_Grade > 150 || E_Grade > 150)
		throw Form::GradeTooLowException();
}

void	Form::beSigned(Bureaucrat& Worker)
{
	if (Worker.GetGrade() <= S_Grade)
		Sign = true;
	else
		throw (Form::GradeTooLowException());
}

std::string		Form::getName()
{
	return (Name);
}

Form::~Form()
{
}
