/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:20:28 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/14 09:27:14 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	std::string	target;
	public:
		static const int	SignGrade = 25;
		static const int	ExecGrade = 5;

		// OCF
		PresidentialPardonForm(/* args */);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();

		//HELPER_FUNCTION
		PresidentialPardonForm(std::string name);
		virtual void	execute(Bureaucrat const& f) const;
};
