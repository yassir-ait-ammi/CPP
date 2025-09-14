/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:27:45 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/14 09:43:47 by yaait-am         ###   ########.fr       */
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
		class GradeTooHighException
		{
			public:
				const std::string	result() const
				{
					return ("the Grade of this BUreaucrat is too hight\n");
				}
		};
		class GradeTooLowException
		{
			public:
				const std::string	result() const
				{
					return ("the Grade of this BUreaucrat is too hight\n");
				}
		};
		class NotSignedException
		{
			public:
				const std::string	result() const
				{
					return ("the Form is not signe yet\n");
				}
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
