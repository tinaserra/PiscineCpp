/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:50:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 16:08:49 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap()
{
	std::cout << "\033[1m[DiamondTrap]\033[0m Default constructor called: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hit_points = 50;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "\033[1m[DiamondTrap]\033[0m Name constructor called: " << _name << std::endl;
	std::cout << _name << ": hit points: " << _hit_points << std::endl;
	std::cout << _name << ": energy points: " << _energy_points << std::endl;
	std::cout << _name << ": attack damage: " << _attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs)
{
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	std::cout << "\033[1m[DiamondTrap]\033[0m Copy constructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[1m[DiamondTrap]\033[0m Destructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void		DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap: " << _name << " attack!" << std::endl;
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator DiamondTrap called" << std::endl;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	return (*this);
}
