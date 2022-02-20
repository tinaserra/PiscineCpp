/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:54:27 by vserra            #+#    #+#             */
/*   Updated: 2022/02/20 19:57:54 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "castType.hpp"

bool	isOutOfRangeDouble(std::string const &str)
{
	long double	l = std::strtod(str.c_str(), NULL);
	if (l < LLONG_MIN || l > LLONG_MAX)
	{
		std::cout << "double Out of range !" << std::endl;
		return false;
	}
	return true;
}

int		main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Met des arguments ta race" << std::endl;
		return (0);
	}
	std::string arg(av[1]);
	if (arg.length() == 0)
	{
		std::cout << "Erreur" << std::endl;
		return (0);
	}

	int		t = detectType(arg);
	converter	converters[4] = {&fromChar, &fromInt, &fromFloat, &fromDouble};
	if (t == UNKNOWN)
		std::cout << "Unknown type" << std::endl;
	else
		converters[t](arg);
	// convert(arg);
	return (0);
}