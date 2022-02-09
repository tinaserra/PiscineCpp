/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:23:58 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 16:42:56 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap() : ClapTrap("")
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "\033[1m[ScavTrap]\033[0m Default constructor called: " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "\033[1m[ScavTrap]\033[0m Name constructor called: " << _name << std::endl;
	std::cout << _name << ": hit points: " << _hit_points << std::endl;
	std::cout << _name << ": energy points: " << _energy_points << std::endl;
	std::cout << _name << ": attack damage: " << _attack_damage << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	std::cout << "\033[1m[ScavTrap]\033[0m Copy constructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1m[ScavTrap]\033[0m Destructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void		ScavTrap::attack(std::string const & target)
{
	if (_energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name << " havn't enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout	<< "ScavTrap " << _name << " attack "<< target << ", causing "
		<< _attack_damage << " points of damage!" << std::endl;

}

void 		ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " has switched to GuardGate mode !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

ScavTrap	&ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignation operator ScavTrap called" << std::endl;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	return (*this);
}
