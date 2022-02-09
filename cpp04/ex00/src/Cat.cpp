/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:13:17 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 22:17:20 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Cat::Cat()
{
	_type = "Cat";
	std::cout << "\033[1m[Cat]\033[0m Default constructor called: " << _type << std::endl;
}

Cat::Cat(Cat const & ref)
{
	std::cout << "\033[1m[Cat]\033[0m Copy constructor called" << std::endl;
	_type = ref._type;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Cat::~Cat(void)
{
	std::cout << "\033[1m[Cat]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoow..." << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Cat	&Cat::operator=(Cat const & ref)
{
	std::cout << "\033[1m[Cat]\033[0m Assignation operator called" << std::endl;
	_type = ref._type;

	return (*this);
}