/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:17:13 by yaait-am          #+#    #+#             */
/*   Updated: 2025/09/08 11:57:42 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	std::string target;
	public:
		static const int	SignGrade = 72;
		static const int	ExecGrade = 45;

		// OCF
		RobotomyRequestForm(/* args */);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();

		// HEL_FUNCTION
		RobotomyRequestForm(std::string	name);
		virtual void	execute(Bureaucrat const& f) const;
};
