/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:46:19 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 23:42:11 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Fixed::Fixed(void) : _nb(0)
{
}

Fixed::Fixed(int const nb) : _nb(nb << _bits)
{
}

Fixed::Fixed(float const flo) : _nb((int)roundf(flo * (1 << _bits)))
{
}

Fixed::Fixed(Fixed const & ref)
{
	_nb = ref._nb;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

Fixed::~Fixed(void)
{
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

int	Fixed::getRawBits(void) const
{
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

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	_nb = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (_nb > rhs._nb);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (_nb < rhs._nb);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (_nb >= rhs._nb);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (_nb <= rhs._nb);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (_nb == rhs._nb);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (_nb != rhs._nb);
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
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
