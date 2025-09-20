/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:55:09 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/20 15:58:57 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	Name;
		bool				Sign;
		const int			S_Grade;
		const int			E_Grade;

	public:

		// OCF
		AForm(/* args */);
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);
		virtual ~AForm();

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

		// helper function
		AForm(const std::string& _name, bool sign, const int s_grade, const int e_grade);
		void	beSigned(Bureaucrat Worker);
		bool	getSign() const;
		std::string		getName() const;
		virtual void	execute(Bureaucrat const & executor) const;
};


#endif
