/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:17:55 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 22:18:43 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Dog::Dog()
{
	_type = "Dog";
	std::cout << "\033[1m[Dog]\033[0m Default constructor called: " << _type << std::endl;
}

Dog::Dog(Dog const & ref)
{
	std::cout << "\033[1m[Dog]\033[0m Copy constructor called" << std::endl;
	_type = ref._type;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Dog::~Dog(void)
{
	std::cout << "\033[1m[Dog]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound(void) const
{
	std::cout << "Whooouf..." << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Dog	&Dog::operator=(Dog const & ref)
{
	std::cout << "\033[1m[Dog]\033[0m Assignation operator called" << std::endl;
	_type = ref._type;

	return (*this);
}