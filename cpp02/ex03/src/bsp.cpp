/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:17:47 by vserra            #+#    #+#             */
/*   Updated: 2022/02/08 13:17:53 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
 * aire d'un triangle
 * ((xb - xa)(yc - ya) - (xc - xa)(yb - ya)) / 2
*/

// si aireABx + aireACx + aireBCx < aireABC
// le point x est dans le triangle ABC

float	aire(Point const p1, Point const p2, Point const p3)
{
	float aire;

	aire = ((p2.getX() - p1.getX())(p3.getY() - p1.getY()) - (p3.getX() - p1.getX())(p2.getY() - p1.getY())) / 2;
	if (aire < 0)
		aire *= -1;
	return (aire);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << std::endl;
	// std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
	// std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
	// std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
	// std::cout << "p: " << point.getX() << ", " << point.getY() << std::endl;
	std::cout << aire(a, b, c) << std::endl;
	
	
	return (true); // le point est dans le triangle
	// return (false); // le point n'est pas dan le triangle
}
