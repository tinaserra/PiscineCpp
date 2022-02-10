/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:41:43 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/10 13:42:19 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "\033[1m[WrongCat]\033[0m Default constructor called: " << _type << std::endl;
}

WrongCat::WrongCat(WrongCat const & ref)
{
	std::cout << "\033[1m[WrongCat]\033[0m Copy constructor called" << std::endl;
	_type = ref._type;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

WrongCat::~WrongCat(void)
{
	std::cout << "\033[1m[WrongCat]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	WrongCat::makeSound(void) const
{
	std::cout << "Meeeeoow..." << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

WrongCat	&WrongCat::operator=(WrongCat const & ref)
{
	std::cout << "\033[1m[WrongCat]\033[0m Assignation operator called" << std::endl;
	_type = ref._type;

	return (*this);
}