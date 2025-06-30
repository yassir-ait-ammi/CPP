/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:14:17 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/30 14:28:35 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.Materia[i])
			Materia[i] = other.Materia[i]->clone();
		else
			Materia[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (Materia[i]);
			if (other.Materia[i])
				Materia[i] = other.Materia[i]->clone();
			else
				Materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (Materia[i] == NULL)
		{
			Materia[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (Materia[i] && Materia[i]->getType() == type)
			return Materia[i]->clone();
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete Materia[i];
}
