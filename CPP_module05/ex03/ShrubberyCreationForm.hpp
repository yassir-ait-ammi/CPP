/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:19:01 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/14 09:27:33 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		static const int	SignGrade = 145;
		static const int	ExecGrade = 137;

		// OCF
		ShrubberyCreationForm(/* args */);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		// HELPER_FUNCTION
		ShrubberyCreationForm(std::string name);
		virtual void	execute(Bureaucrat const& f) const;
};
