/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:56:34 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 22:02:07 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include "Array.hpp"
#include <iostream>

int	main()
{
	std::cout << "* \033[1;37m[INT]\033[0m -------------------- *" << std::endl;
	{
		Array<int>array(5);
		Array<int>copy(array);

		try {
			for (unsigned int i = 0; i < array.size(); i++)
				array[i] = i;

			for (unsigned int i = 0; i < copy.size(); i++)
				copy[i] = i + 10;

			for (unsigned int i = 0; i < array.size(); i++)
				std::cout << array[i] << " ";

			std::cout << std::endl;

			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";

			std::cout << std::endl;

			std::cout << array[6] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "* \033[1;37m[FLOAT]\033[0m ------------------ *" << std::endl;
	{
		Array<float>array(3);
		Array<float>copy;
		
		float	floats[3] = {9.999, 99.9, 999.99};
		unsigned int sz = array.size();
		try {
			for (unsigned int i = 0; i < sz; i++)
				array[i] = floats[i];

			copy = array;

			for (unsigned int i = 0; i < sz; i++)
				std::cout << array[i] << " ";
			std::cout << std::endl;
			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << std::endl;

			std::cout << std::endl;

			for (unsigned int i = 0; i < sz; i++)
				array[i] = array[i] + 1;

			for (unsigned int i = 0; i < sz; i++)
				std::cout << array[i] << " ";
			std::cout << std::endl;

			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << std::endl;

			std::cout << array[10] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	
	std::cout << "* \033[1;37m[STRINGS]\033[0m ---------------- *" << std::endl;
	{
		Array<std::string>array(4);

		try {
			array[0] = "Ce n'est pas";
			array[1] = "un sprint";
			array[2] = "mais";
			array[3] = "un marathon";

			for (unsigned int i = 0; i < array.size(); i++) {
				std::cout << array[i] << " ";
			}
			std::cout << std::endl;

			std::cout << array[12] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return (0);
}