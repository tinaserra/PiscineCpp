/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:41:43 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/10 17:30:16 by tinaserra        ###   ########.fr       */
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

WrongCat::WrongCat(WrongCat const & rhs)
{
	std::cout << "\033[1m[WrongCat]\033[0m Copy constructor called" << std::endl;
	_type = rhs._type;
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

WrongCat	&WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "\033[1m[WrongCat]\033[0m Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}