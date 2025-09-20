/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:32:01 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 16:04:23 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.GetName() << ", bureaucrat grade " << b.GetGrade();
	return os;
}

const std::string	Bureaucrat::GradeTooHighException::result() const
{
	return ("the Grade of this BUreaucrat is too hight\n");
}
