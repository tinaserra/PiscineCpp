/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:03:50 by vserra            #+#    #+#             */
/*   Updated: 2022/02/10 17:30:16 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Animal::Animal(void) : _type("Animal")
{
	std::cout << "\033[1m[Animal]\033[0m Default constructor called: " << _type << std::endl;
}

Animal::Animal(Animal const & rhs)
{
	std::cout << "\033[1m[Animal]\033[0m Copy constructor called" << std::endl;
	_type = rhs._type;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Animal::~Animal(void)
{
	std::cout << "\033[1m[Animal]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	Animal::getType(void) const
{
	return (_type);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound(void) const
{
	std::cout << "\033[1m[Animal]\033[0m make sound" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Animal	&Animal::operator=(Animal const & rhs)
{
	std::cout << "\033[1m[Animal]\033[0m Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}
