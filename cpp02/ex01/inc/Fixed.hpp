/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:38:43 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 18:59:07 by tinaserra        ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int _nb;
		static int const _bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &ref);

#endif
