/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:17:47 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 17:22:36 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
 * aire d'un triangle
 * ((xb - xa)(yc - ya) - (xc - xa)(yb - ya)) / 2
*/

// si aireABx + aireACx + aireBCx < aireABC
// le point x est dans le triangle ABC

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
	std::cout << std::endl;
	std::cout << "aire abc: " << aire(a, b, c) << std::endl;
	std::cout << "aire pab: " << aire(point, a, b) << std::endl;
	std::cout << "aire pac: " << aire(point, a, c) << std::endl;
	std::cout << "aire pcb: " << aire(point, c, b) << std::endl;

	if ((aireABp + aireACp + aireBCp) < aireABC)
		return (true); // le point est dans le triangle
	return (false); // le point n'est pas dan le triangle
}

	// std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
	// std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
	// std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
	// std::cout << "p: " << point.getX() << ", " << point.getY() << std::endl;