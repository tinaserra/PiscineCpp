/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:41:07 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 21:41:19 by vserra           ###   ########.fr       */
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
	std::cout << std::endl << "------------- CREATION -------------" << std::endl;
	Animal			*animal = new Animal();
	Animal			*dog = new Dog();
	Animal			*cat = new Cat();
	WrongAnimal 	*wrongAnimal = new WrongAnimal();
	WrongAnimal 	*wrongCat = new WrongCat();

	std::cout << std::endl << "-------------- ANIMAL --------------" << std::endl;
	std::cout << "Animal type: " << animal->getType() << std::endl;
	std::cout << "Animal sound: ";
	animal->makeSound();

	std::cout << std::endl << "--------------- CAT ----------------" << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;
	std::cout << "Cat sound: ";
	cat->makeSound();

	std::cout << std::endl << "--------------- DOG ----------------" << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Dog sound: ";
	dog->makeSound();

	std::cout << std::endl << "----------- WRONG ANIMAL -----------" << std::endl;
	std::cout << "Wrong animal type: " << wrongAnimal->getType() << std::endl;
	std::cout << "Wrong animal sound: ";
	wrongAnimal->makeSound();

	std::cout << std::endl << "------------- WRONG CAT ------------" << std::endl;
	std::cout << "Wrong cat type: " << wrongCat->getType() << std::endl;
	std::cout << "Wrong cat sound: ";
	wrongCat->makeSound();

	std::cout << std::endl << "-------------- DELETE --------------" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}