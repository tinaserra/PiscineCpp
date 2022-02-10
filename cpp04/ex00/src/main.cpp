/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:41:07 by vserra            #+#    #+#             */
/*   Updated: 2022/02/10 16:42:47 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << std::endl << "*" << "\033[1;34m Constructors \033[0m------------------- *" << std::endl;
	const Animal		*animal = new Animal();
	const Animal		*dog = new Dog();
	const Animal		*cat = new Cat();
	const WrongAnimal	*wrongAnimal = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();

	std::cout << std::endl << "*" << "\033[1;32m Animal \033[0m------------------------- *" << std::endl;
	std::cout << "Type: " << animal->getType() << std::endl;
	animal->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m Cat \033[0m---------------------------- *" << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m Dog \033[0m---------------------------- *" << std::endl;
	std::cout << "Type: " << dog->getType() << std::endl;
	dog->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m WrongAnimal \033[0m-------------------- *" << std::endl;
	std::cout << "Type: " << wrongAnimal->getType() << std::endl;
	wrongAnimal->makeSound();

	std::cout << std::endl << "*" << "\033[1;32m WrongCat \033[0m----------------------- *" << std::endl;
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	std::cout << std::endl << "*" << "\033[1;34m Destructors \033[0m-------------------- *" << std::endl;	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}