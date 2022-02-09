/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:17:47 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 18:05:00 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
 * aire d'un triangle
 * ((xb - xa)(yc - ya) - (xc - xa)(yb - ya)) / 2
 * si (aireABp + aireACp + aireBCp) == aireABC
 * -> le point p est dans le triangle ABC
 * si une aire vaut zero le point est sur le bord du triangle
*/

Fixed	aire(Point p1, Point p2, Point p3)
{
	Fixed aire;

	Fixed p1x = p1.getX();
	Fixed p1y = p1.getY();
	Fixed p2x = p2.getX();
	Fixed p2y = p2.getY();
	Fixed p3x = p3.getX();
	Fixed p3y = p3.getY();

	aire = ((p2x - p1x)*(p3y - p1y) - (p3x - p1x)*(p2y - p1y)) / 2;
	if (aire < 0)
		aire = aire * -1;
	return (aire);
}

bool	bsp(Point a, Point b, Point c, Point point)
{
	Fixed aireABC = aire(a, b, c);
	Fixed aireABp = aire(point, a, b);
	Fixed aireACp = aire(point, a, c);
	Fixed aireBCp = aire(point, c, b);
	// std::cout << std::endl;
	// std::cout << "aire abc: " << aire(a, b, c) << std::endl;
	// std::cout << "aire pab: " << aire(point, a, b) << std::endl;
	// std::cout << "aire pac: " << aire(point, a, c) << std::endl;
	// std::cout << "aire pcb: " << aire(point, c, b) << std::endl;

	if (aireABp == 0 || aireACp == 0 || aireBCp == 0)
		return (false);
	if ((aireABp + aireACp + aireBCp) == aireABC)
		return (true);
	return (false);
}