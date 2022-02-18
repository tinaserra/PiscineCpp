/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:54:55 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 15:53:10 by vserra           ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << str << " Name constructor called: " << _name << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	std::cout << str << " Destructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string const	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
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

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldn’t sign " << form.getName() << " because: " << e.what() << std::endl;
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	// on ne peut pas initialiser name parce qu'il est const
	// _name = rhs.getName();
	_grade = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}