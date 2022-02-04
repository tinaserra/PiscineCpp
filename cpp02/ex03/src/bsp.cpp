/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:17:47 by vserra            #+#    #+#             */
/*   Updated: 2022/02/05 00:22:03 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
 * aire d'un triangle
 * ((xb - xa)(yc - ya) - (xc - xa)(yb - ya)) / 2
*/

// si aireABx + aireACx + aireBCx < aireABC
// le point x est dans le triangle ABC

bool bsp(Point const a, Point const b, Point const c, Point const point);