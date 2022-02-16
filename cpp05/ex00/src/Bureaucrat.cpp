/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:54:55 by vserra            #+#    #+#             */
/*   Updated: 2022/02/16 23:11:54 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static std::string str("\033[1m[Bureaucrat]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat(void) : _name("")
{
	std::cout << str << " Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << str << " Name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & save) : _name(save._name)
{
	std::cout << str << " Copy constructor called" << std::endl;
	*this = save;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Bureaucrat::~Bureaucrat(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string const	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Bureaucrat::increaseGrade(void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	return ;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rsh)
{
	// on ne eut pas initialiser name parce qu'il est const
	// _name = rsh.getName();
	_grade = rsh.getGrade();
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}