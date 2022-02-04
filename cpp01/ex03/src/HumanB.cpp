/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:24:50 by vserra            #+#    #+#             */
/*   Updated: 2022/02/03 18:47:25 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

HumanB::HumanB(std::string name) :  _name(name), _weapon(NULL) 
{
	std::cout << "\033[1;32m" << name
		<< "\033[0m" << ": is being constructed !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

HumanB::~HumanB()
{
	std::cout << this->_name << ": is being destructed !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

/* -------------------------------------------------------------------------- */
/* FUNCTIONS MEMBER                                                           */
/* -------------------------------------------------------------------------- */

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attack with his " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " could not attack" << std::endl;
}
