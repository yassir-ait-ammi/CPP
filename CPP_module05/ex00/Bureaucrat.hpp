/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:27:45 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/19 16:07:08 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

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

		class GradeTooHighException
		{
			public:
				GradeTooHighException() {};
				const std::string	result() const
				{
					return ("the Grade of this BUreaucrat is too hight\n");
				}
				~GradeTooHighException() {};
		};
		class GradeTooLowException
		{
			public:
				GradeTooLowException() {};
				const std::string	result() const
				{
					return ("the Grade of this BUreaucrat is too hight\n");
				}
				~GradeTooLowException() {};
		};
		Bureaucrat(const std::string &name, int Grade);
		void		SetName(std::string &NewName);
		void		SetGrade(int NewGrade);
		std::string	GetName() const;
		int			GetGrade() const;
		void		increment();
		void		decrement();
		void		Check_Valid_Grade(int Grade);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
