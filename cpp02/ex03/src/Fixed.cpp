/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:46:19 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 19:57:07 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Fixed::Fixed(void) : _nb(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _nb(nb << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const flo) : _nb((int)roundf(flo * (1 << _bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & ref)
{
	// std::cout << "Copy constructor called" << std::endl;
	_nb = ref._nb;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_nb); 
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

float	Fixed::toFloat(void) const
{
	return (_nb / (float)(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (_nb >> _bits);
}

const Fixed 	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed 	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Fixed	&Fixed::operator=(Fixed const &ref)
{
	// std::cout << "Assignation operator called" << std::endl;
	_nb = ref.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &ref)
{
	o << ref.toFloat();
	return (o);
}

bool	Fixed::operator>(const Fixed &ref) const
{
	return (_nb > ref._nb);
}

bool	Fixed::operator<(const Fixed &ref) const
{
	return (_nb < ref._nb);
}

bool	Fixed::operator>=(const Fixed &ref) const
{
	return (_nb >= ref._nb);
}

bool	Fixed::operator<=(const Fixed &ref) const
{
	return (_nb <= ref._nb);
}

bool	Fixed::operator==(const Fixed &ref) const
{
	return (_nb == ref._nb);
}

bool	Fixed::operator!=(const Fixed &ref) const
{
	return (_nb != ref._nb);
}

Fixed	Fixed::operator+(const Fixed &ref) const
{
	return (Fixed(toFloat() + ref.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &ref) const
{
	return (Fixed(toFloat() - ref.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &ref) const
{
	return (Fixed(toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &ref) const
{
	return (Fixed(toFloat() / ref.toFloat()));
}

Fixed &	Fixed::operator--(void)
{
	_nb--;
	return (*this);
}

Fixed &	Fixed::operator++(void)
{
	_nb++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--(*this);
	return (tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++(*this);
	return (tmp);
}
