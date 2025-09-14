/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:25:58 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/08 11:58:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
	: target ("target (Default)")
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	target = other.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& f) const
{
	if (!getSign())
		throw (Bureaucrat::NotSignedException());
	if (f.GetGrade() > ExecGrade)
		throw(Bureaucrat::GradeTooLowException());
	std::string	name = target + "_shrubbery";
	std::ofstream out(name.c_str());
	if (!out)
	{
		std::cerr << "Error: cannot open output file.\n";
		throw (char());
	}
	out <<
	"          &&& &&  & &&\n"
	"      && &\\/&\\|& ()|/ @, &&\n"
	"      &\\/(/&/&||/& /_/)_&/_&\n"
	"   &() &\\/&|()|/&\\/ '%\" & ()\n"
	"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
	"&&   && & &| &| /& & % ()& /&&\n"
	" ()&_---()&\\&\\|&&-&&--%---()~\n"
	"     &&     \\|||\n"
	"             |||\n"
	"             |||\n"
	"             |||\n"
	"       , -=-~  .-^- _\n";
	out.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: target(other.target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
	: target(name)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

