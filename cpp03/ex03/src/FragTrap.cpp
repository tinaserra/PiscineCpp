/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:45:59 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 16:42:43 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap() : ClapTrap("")
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "\033[1m[FragTrap]\033[0m Default constructor called: " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "\033[1m[FragTrap]\033[0m Name constructor called: " << _name << std::endl;
	std::cout << _name << ": hit points: " << _hit_points << std::endl;
	std::cout << _name << ": energy points: " << _energy_points << std::endl;
	std::cout << _name << ": attack damage: " << _attack_damage << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs)
{
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	std::cout << "\033[1m[FragTrap]\033[0m Copy constructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1m[FragTrap]\033[0m Destructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void		FragTrap::attack(std::string const & target)
{
	if (_energy_points <= 0)
	{
		std::cout << "FragTrap " << _name << " havn't enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout	<< "FragTrap " << _name << " attack "<< target << ", causing "
		<< _attack_damage << " points of damage!" << std::endl;

}

void 		FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << " say: Give me a High Five bro !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

FragTrap	&FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Assignation operator FragTrap called" << std::endl;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	return (*this);
}
