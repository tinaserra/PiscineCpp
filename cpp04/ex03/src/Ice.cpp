/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:29:01 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/16 13:28:50 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Ice::Ice(void)
{
	_type = "ice";
	std::cout << "\033[1m[Ice]\033[0m Default constructor called: " << _type << std::endl;
}

Ice::Ice(Ice const & src)
{
	std::cout << "\033[1m[Ice]\033[0m Copy constructor called" << std::endl;
	*this = src;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Ice::~Ice(void)
{
	std::cout << "\033[1m[Ice]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

AMateria	*Ice::clone() const
{
	AMateria *	ice = new Ice;
	return (ice);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Ice	&Ice::operator=(Ice const & rhs)
{
	std::cout << "\033[1m[Ice]\033[0m Assignation operator called" << std::endl;
	if (this != &rhs)
		_type = rhs.getType();
	return (*this);
}