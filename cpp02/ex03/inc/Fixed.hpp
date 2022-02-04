/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:38:43 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 19:12:00 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(); // Constructeur par défaut
		Fixed(int const nb);
		Fixed(float const flo);
		Fixed(Fixed const &ref); // Constructeur de recopie
		~Fixed(); // Destructeur

		Fixed	&operator=(Fixed const &ref); // Operator d'affectation

		bool	operator>(const Fixed &ref) const;
		bool	operator<(const Fixed &ref) const;
		bool	operator>=(const Fixed &ref) const;
		bool	operator<=(const Fixed &ref) const;
		bool	operator==(const Fixed &ref) const;
		bool	operator!=(const Fixed &ref) const;

		Fixed	operator+(const Fixed &ref) const;
		Fixed	operator-(const Fixed &ref) const;
		Fixed	operator*(const Fixed &ref) const;
		Fixed	operator/(const Fixed &ref) const;
		Fixed 	&operator++(void);
		Fixed 	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

	private:
		int _nb;
		static int const _bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &ref);

#endif
