/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:27:56 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/16 13:29:13 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource(void)
{
	std::cout << "\033[1m[MateriaSource]\033[0m Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "\033[1m[MateriaSource]\033[0m Copy constructor called" << std::endl;
	*this = src;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

MateriaSource::~MateriaSource(void)
{
	std::cout << "\033[1m[MateriaSource]\033[0m Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
	}
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	MateriaSource::learnMateria(AMateria *toLearn)
{
	if (toLearn == NULL)
	{
		std::cout << "Invalid AMateria" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = toLearn;
			std::cout << toLearn->getType() << " has been learned" << std::endl;
			break;
		}
	}
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure") // useless
		return (NULL);
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL && !_materias[i]->getType().compare(type))
		{
			std::cout << type << " has been created" << std::endl;
			return (_materias[i]->clone());
		}
	}
	return (NULL);
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

MateriaSource	&MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "\033[1m[MateriaSource]\033[0m Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i] != NULL)
				_materias[i] = rhs._materias[i]->clone();
		}
	}
	return (*this);
}