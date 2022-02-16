/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:28:21 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/16 13:28:41 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Character::Character(void) : _name("null")
{
	std::cout << "\033[1m[Character]\033[0m Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "\033[1m[Character]\033[0m Name constructor called: " << _name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "\033[1m[Character]\033[0m Copy constructor called" << std::endl;
	*this = src;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Character::~Character(void)
{
	std::cout << "\033[1m[Character]\033[0m Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	const	&Character::getName(void) const
{
	return (_name);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Invalid AMateria" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << m->getType() << " has been added to " << _name << " inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	return ;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
	{
		std::cout << "Nothing to unequip" << std::endl;
		return ;
	}
	std::cout << _inventory[idx]->getType() << " has been removed to " << _name << " inventory" << std::endl;
	_inventory[idx] = NULL;
	return ;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
	{
		std::cout << "Invalid AMateria to use" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Character	&Character::operator=(Character const & rhs)
{
	std::cout << "\033[1m[Character]\033[0m Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
		}
		_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i] != NULL)
				equip(rhs._inventory[i]->clone());
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}