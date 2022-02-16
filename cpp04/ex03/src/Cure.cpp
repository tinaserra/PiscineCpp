/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:28:44 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/16 13:28:00 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Cure::Cure(void)
{
	_type = "cure";
	std::cout << "\033[1mCure]\033[0m Default constructor called: " << _type << std::endl;
}

Cure::Cure(Cure const & src)
{
	std::cout << "\033[1m[Cure]\033[0m Copy constructor called" << std::endl;
	*this = src;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Cure::~Cure(void)
{
	std::cout << "\033[1m[Cure]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

AMateria	*Cure::clone() const
{
	AMateria *	cure = new Cure;
	return (cure);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Cure	&Cure::operator=(Cure const & rhs)
{
	std::cout << "\033[1m[Cure]\033[0m Assignation operator called" << std::endl;
	if (this != &rhs)
		_type = rhs.getType();
	return (*this);
}