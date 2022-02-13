/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:40:29 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/10 17:30:16 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "\033[1m[WrongAnimal]\033[0m Default constructor called: " << _type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	std::cout << "\033[1m[WrongAnimal]\033[0m Copy constructor called" << std::endl;
	_type = rhs._type;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[1m[WrongAnimal]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\033[1m[WrongAnimal]\033[0m make sound" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "\033[1m[WrongAnimal]\033[0m Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}
