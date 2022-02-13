/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:55:53 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/13 13:07:15 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Brain::Brain()
{
	std::cout << "\033[1m[Brain]\033[0m Default constructor called"<< std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = '0';
}

Brain::Brain(Brain const & rhs)
{
	std::cout << "\033[1m[Brain]\033[0m Copy constructor called" << std::endl;
	*this = rhs;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Brain::~Brain()
{
	std::cout << "\033[1m[Brain]\033[0m Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	Brain::getIdea(unsigned int index) const
{
	return (_ideas[index]);
}

void	Brain::setIdea(unsigned int index, std::string idea)
{
	_ideas[index] = idea;
	return;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_ideas[i];
		if (i != 99)
			std::cout << " ";
	}
	std::cout << std::endl;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Brain	&Brain::operator=(Brain const & rhs)
{
	std::cout << "\033[1m[Brain]\033[0m Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}
