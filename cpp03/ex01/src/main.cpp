/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:14:10 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/08 15:09:25 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScavTrap.hpp"

int main()
{
	std::string mireille = "\033[34mMireille\033[0m";
	std::string matthieu = "\033[33mMatthieu\033[0m";

	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------------------------------- *" << std::endl;
	ScavTrap p1(mireille);
	ScavTrap p2(matthieu);

	std::cout << std::endl << "*" << "\033[1;31m ScavTrap \033[0m----------------------------------------- *" << std::endl;
	p1.attack(matthieu);
	p2.takeDamage(p1.getAttackDamage());
	p1.attack(matthieu);
	p1.attack(matthieu);
	p1.attack(matthieu);
	p2.attack(mireille);
	p2.attack(mireille);
	p2.attack(mireille);
	p2.attack(mireille);
	p1.attack(matthieu);


	std::cout << std::endl;
	p2.beRepaired(50);
	p1.beRepaired(20);

	std::cout << std::endl;
	p2.guardGate();
	p1.guardGate();

	std::cout << std::endl << "*" << "\033[1;32m Accessors \033[0m---------------------------------------- *" << std::endl;
	std::cout << p1.getName() << " hit points: " << p1.getHitPoints() << std::endl;
	std::cout << p1.getName() << " energy points: " << p1.getEnergyPoints() << std::endl;
	std::cout << p1.getName() << " attack damage: " << p1.getAttackDamage() << std::endl;

	std::cout << p2.getName() << " hit points: " << p2.getHitPoints() << std::endl;
	std::cout << p2.getName() << " energy points: " << p2.getEnergyPoints() << std::endl;
	std::cout << p2.getName() << " attack damage: " << p2.getAttackDamage() << std::endl;
	
	std::cout << std::endl << "*" << "\033[1;32m Destructors \033[0m-------------------------------------- *" << std::endl;
}