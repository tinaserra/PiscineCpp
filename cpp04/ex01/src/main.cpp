/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:41:07 by vserra            #+#    #+#             */
/*   Updated: 2022/02/13 13:33:57 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int main(void)
{
	std::cout << std::endl << "*" << "\033[1;34m Constructors \033[0m------------------- *" << std::endl;
	Animal	*animals[NUMBER_OF_ANIMALS];
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < (NUMBER_OF_ANIMALS / 2))
		{
			std::cout << std::endl << "*" << "\033[1;32m Dog " << i + 1 << " \033[0m---------------------------- *" << std::endl;
			animals[i] = new Dog();
			std::cout << "Type: " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
			std::cout << "Brain ideas: " << std::endl;
			static_cast<Dog *>(animals[i])->getBrain().printIdeas();
			std::cout << "Set ideas: " << std::endl;
			static_cast<Dog *>(animals[i])->getBrain().setIdea(0, "This human gave me food, he must be my master");
			static_cast<Dog *>(animals[i])->getBrain().printIdeas();
		}
		else
		{
			std::cout << std::endl << "*" << "\033[1;32m Cat " << i + 1 << " \033[0m---------------------------- *" << std::endl;
			animals[i] = new Cat();
			std::cout << "Type: " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
			std::cout << "Brain ideas: " << std::endl;
			static_cast<Cat *>(animals[i])->getBrain().printIdeas();
			std::cout << "Set ideas: " << std::endl;
			static_cast<Cat *>(animals[i])->getBrain().setIdea(0, "This human gave me food, I must be his master");
			static_cast<Cat *>(animals[i])->getBrain().printIdeas();
		
		}
	}
	std::cout << std::endl << "*" << "\033[1;34m Destructors \033[0m-------------------- *" << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
	return (0);
}