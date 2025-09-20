/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:27:45 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:58:26 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class	AForm;

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

		// exception
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
		class NotSignedException : public std::exception
		{
			public:
				const char*	what() const _GLIBCXX_NOTHROW;
		};

		// helper_function
		Bureaucrat(const std::string &name, int Grade);
		void		SetName(std::string &NewName);
		void		SetGrade(int NewGrade);
		std::string	GetName() const;
		int			GetGrade() const;
		void		increment();
		void		decrement();
		void		Check_Valid_Grade(int Grade);
		void		executeForm(const AForm& form) const;
		void		signForm(AForm& form) const;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
