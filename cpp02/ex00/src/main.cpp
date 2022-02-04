/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:48:56 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/04 17:39:03 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.hpp>

int main()
{
	std::cout << "*" << "\033[1;34m Constructors \033[0m---------------- *" << std::endl;
	Fixed a;
	Fixed b(a);
	Fixed c;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m Operator \033[0m-------------------- *" << std::endl;
	c = b;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m A \033[0m--------------------------- *" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(3);
	std::cout << a.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m B \033[0m--------------------------- *" << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m C \033[0m--------------------------- *" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	b.setRawBits(9);
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m B \033[0m--------------------------- *" << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m C \033[0m--------------------------- *" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "*" << "\033[1;34m Destructors \033[0m----------------- *" << std::endl;

	return 0;
}