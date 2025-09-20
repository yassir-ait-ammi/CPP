/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:32:01 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:58:43 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: name(other.name), Grade(other.Grade)
{
	Check_Valid_Grade(Grade);
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat&	other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: name(name)
{
	SetGrade(grade);
	Check_Valid_Grade(grade);
}

void	Bureaucrat::SetName(std::string &NewName)
{
	name = NewName;
}
void	Bureaucrat::SetGrade(int NewGrade)
{
	Grade = NewGrade;
}
std::string	Bureaucrat::GetName() const
{
	return (name);
}
int	Bureaucrat::GetGrade() const
{
	return (Grade);
}

void	Bureaucrat::increment()
{
	Check_Valid_Grade(Grade - 1);
	Grade -= 1;
}

void	Bureaucrat::decrement()
{
	Check_Valid_Grade(Grade + 1);
	Grade += 1;
}


void	Bureaucrat::Check_Valid_Grade(int Grade)
{
	if (Grade < 1)
		throw GradeTooHighException();
	if (Grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << name << " executes " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << name << " cannot execute " << form.getName()
				<< " because " << e.what() << std::endl;
	}
}


void Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signs " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << name << " cannot sign " << form.getName()
				<< " because " << e.what() << std::endl;
	}
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.GetName() << ", bureaucrat grade " << b.GetGrade();
	return os;
}

const char*	Bureaucrat::NotSignedException::what() const _GLIBCXX_NOTHROW
{
	return ("the Form is not signe yet\n");
}

const char*	Bureaucrat::GradeTooHighException::what() const _GLIBCXX_NOTHROW
{
	return ("the Grade of this Bureaucrat is too hight\n");
}

const char*	Bureaucrat::GradeTooLowException::what() const _GLIBCXX_NOTHROW
{
	return ("the Grade of this Bureaucrat is too low\n");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() _GLIBCXX_NOTHROW
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() _GLIBCXX_NOTHROW
{}
