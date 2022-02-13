/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:38:43 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/13 12:45:22 by tinaserra        ###   ########.fr       */
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
		Fixed(Fixed const &rhs); // Constructeur de recopie
		~Fixed(); // Destructeur

		Fixed	&operator=(Fixed const &rhs); // Operator d'affectation

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int _nb;
		static int const _bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
