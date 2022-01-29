/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:37:14 by vserra            #+#    #+#             */
/*   Updated: 2022/01/29 11:55:41 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Zombie.hpp"

int main(int ac, char **av) 
{
	Zombie	*horde;
	int		N;
	
	if (ac != 2)
		return (0);
	N = std::atoi(av[1]);

	if ( N <= 0)
		return (1);

	std::cout << "*" << "\033[1;34m CONSTRUCTORS \033[0m--------------------------- *" << std::endl;
	horde = zombieHorde(N, "Jean Michel");
	std::cout << std::endl;
	std::cout << "*" << "\033[1;34m ANNOUNCES \033[0m--------------------------- *" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout << std::endl;
	std::cout << "*" << "\033[1;34m DESTRUCTORS \033[0m--------------------------- *" << std::endl;
	delete [] horde;
	return (0);
}