/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:48:56 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/09 17:14:45 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"


/*
 * aire d'un triangle
 * ((xb - xa)(yc - ya) - (xc - xa)(yb - ya)) / 2
*/

int		main()
{
	Point a(1, 1);
	Point b(4, 3);
	Point c(2, 6);

	Point point1(1, 2); // out
	Point point2(2, 3); // in
	Point point3(2.5, 3.5); // in
	Point point4(2, 6); // out

	std::cout << "point 1 (1, 2)" << bsp(a, b, c, point1) << std::endl;
	std::cout << "point 2 (2, 3)" << bsp(a, b, c, point2) << std::endl;
	std::cout << "point 3 (2.5, 3.5)" << bsp(a, b, c, point3) << std::endl;
	std::cout << "point 4 (2, 6)" << bsp(a, b, c, point4) << std::endl;

	return (0);
}