/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:12:47 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/09 20:23:28 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(void) : _name("null"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "\033[1m[ClapTrap]\033[0m Default constructor called: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << _name << ": is being constructed !" << std::endl;
	std::cout << _name << ": hit points: " << _hit_points << std::endl;
	std::cout << _name << ": energy points: " << _energy_points << std::endl;
	std::cout << _name << ": attack damage: " << _attack_damage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	std::cout << "\033[1m[ClapTrap]\033[0m Copy constructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

ClapTrap::~ClapTrap(void) {
	std::cout << _name << ": is being destructed !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	ClapTrap::getName(void)
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void)
{
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (_attack_damage);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(std::string const & target)
{
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " havn't enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout	<< "ClapTrap " << _name << " attack "<< target << ", causing "
		<< _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " havn't enought energy point" << std::endl;
		return ;
	}
	if (amount >= _hit_points || amount > 75892)
	{
		_hit_points = 0;
		_energy_points--;
		std::cout << "ClapTrap " << _name << " take damage causing " << amount << " points of damage." << std::endl;
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
	_energy_points--;
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " take damage causing " << amount << " points of damage.";
	std::cout << " Total HP: " << _hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
		return ;
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " havn't enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	if (amount > 75892)
	{
		_hit_points = 75892;
		std::cout << "ClapTrap " << _name << " earned 75892 hit points. ";
	}
	else
	{
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " earned " << amount << " hit points. ";
	}
	std::cout << "Total HP: " << _hit_points << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

ClapTrap	&ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;

	return (*this);
}