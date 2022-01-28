/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:15:44 by vserra            #+#    #+#             */
/*   Updated: 2022/01/28 18:50:16 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	giveName("No name");
	std::cout	<< "Default Constructor called with name: ";
	std::cout	<< std::right << std::setfill(' ') << std::setw(12) 
				<< "\033[1;32m" << getName() << "\033[0m" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": is being destructed !" << std::endl;
}

std::string	Zombie::getName() const
{
	return (_name);
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::giveName(std::string name)
{
	Zombie::_name = name;
}