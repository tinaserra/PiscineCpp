/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:09:28 by vserra            #+#    #+#             */
/*   Updated: 2022/02/08 13:12:44 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point(); // Constructeur par défaut
		Point(float const x, float const y);
		// Point(Point const &rhs); // Constructeur de recopie
		~Point(); // Destructeur

		Point	&operator=(Point const &rhs); // Operator d'affectation

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif