/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:41:07 by vserra            #+#    #+#             */
/*   Updated: 2022/02/14 09:11:17 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << std::endl << "*" << "\033[1;34m Constructors \033[0m------------------- *" << std::endl;
	const AAnimal		*animal = new AAnimal();
	const AAnimal		*dog = new Dog();
	const AAnimal		*cat = new Cat();

	std::cout << std::endl << "*" << "\033[1;32m Animal \033[0m------------------------- *" << std::endl;
	std::cout << "Type: " << animal->getType() << std::endl;
	animal->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m Cat \033[0m---------------------------- *" << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m Dog \033[0m---------------------------- *" << std::endl;
	std::cout << "Type: " << dog->getType() << std::endl;
	dog->makeSound();

	std::cout << std::endl << "*" << "\033[1;34m Destructors \033[0m-------------------- *" << std::endl;
	delete animal;
	delete dog;
	delete cat;

	return (0);
}