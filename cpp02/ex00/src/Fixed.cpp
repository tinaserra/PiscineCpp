/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:46:19 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 19:03:57 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & ref)
{
	std::cout << "Copy constructor called" << std::endl;
	_nb = ref._nb;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nb); 
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Fixed	&Fixed::operator=(Fixed const & ref)
{
	std::cout << "Assignation operator called" << std::endl;
	_nb = ref.getRawBits();
	return (*this);
}