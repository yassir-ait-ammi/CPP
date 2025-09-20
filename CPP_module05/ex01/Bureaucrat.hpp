/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:27:45 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:50:55 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
# include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string name;
		int Grade;
	public:
		// OCF
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&		operator=(const Bureaucrat&	other);
		~Bureaucrat();

		// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				const char*	what() const _GLIBCXX_NOTHROW;
				~GradeTooHighException() _GLIBCXX_NOTHROW;
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				const char*	what() const _GLIBCXX_NOTHROW;
				~GradeTooLowException() _GLIBCXX_NOTHROW;
		};

		// helper fincion
		Bureaucrat(const std::string &name, int Grade);
		void		SetName(std::string &NewName);
		void		SetGrade(int NewGrade);
		std::string	GetName() const;
		int			GetGrade() const;
		void		increment();
		void		decrement();
		void		Check_Valid_Grade(int Grade);
		void		signForm(Form form);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
