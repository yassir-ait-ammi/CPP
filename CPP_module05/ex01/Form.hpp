/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:05:17 by yaait-am          #+#    #+#             */
/*   Updated: 2025/08/27 10:57:45 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	Name;
		bool				Sign;
		const int			S_Grade;
		const int			E_Grade;

	public:

		// OCF
		Form(/* args */);
		Form(const Form& other);
		Form&	operator=(const Form& other);
		~Form();

		// exceptions
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

		// helper function
		Form(const std::string& _name, bool sign, const int s_grade, const int e_grade);
		void	beSigned(Bureaucrat& Worker);
		std::string		getName();
};

#endif
