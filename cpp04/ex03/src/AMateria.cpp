/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:27:59 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/16 13:28:13 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

AMateria::AMateria(void) : _type("null")
{
	std::cout << "\033[1m[AMateria]\033[0m Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "\033[1m[AMateria]\033[0m Type constructor called: " << _type << std::endl;
}

AMateria::AMateria(AMateria const & rhs)
{
	std::cout << "\033[1m[AMateria]\033[0m Copy constructor called" << std::endl;
	*this = rhs;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

AMateria::~AMateria(void)
{
	std::cout << "\033[1m[AMatera]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string const &	AMateria::getType(void) const
{
	return (_type);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void		AMateria::use(ICharacter& target)
{
	std::cout <<"\033[1m[AMateria]\033[0m use: Don't do anything to " << target.getName() << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

AMateria	&AMateria::operator=(AMateria const & rhs)
{
	std::cout << "\033[1m[AMateria]\033[0m Assignation operator called" << std::endl;
	if (this != &rhs)
		_type = rhs.getType();
	return (*this);
}