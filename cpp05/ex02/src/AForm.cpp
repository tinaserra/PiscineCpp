/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:17:12 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 18:56:21 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

static std::string str("\033[1m[AForm]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

AForm::AForm(void) : _statut(false), _name(""), _signGrade(150), _execGrade(150), _target("")
{
	std::cout << str << " Default constructor called" << std::endl;
}

AForm::AForm(std::string const name, int signGrade, int execGrade, std::string target)
		: _statut(false), _name(name) , _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
	std::cout << str << " Name constructor called: " << _name << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & save) : _statut(save._statut), _name(save._name), _signGrade(save._signGrade), _execGrade(save._execGrade), _target(save._target)
{
	std::cout << str << " Copy constructor called" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

AForm::~AForm(void)
{
	std::cout << str << " Destructor called: " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string const	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_statut);
}

int	AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (_execGrade);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	AForm::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	else
		_statut = true;
	return ;
}

bool	AForm::execute(Bureaucrat const & executor) const
{
	if (_statut == false)
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
	return (true);
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

AForm	&AForm::operator=(AForm const & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, AForm const & rhs)
{
	o << "AForm " << rhs.getName() << std::endl;
	o << "Statut: ";
	if (rhs.getSigned())
		o << "signed | ";
	else
		o << "not signed | ";
	o << "Grade signature: " << rhs.getSignGrade() << " | ";
	o << "Grade execution: " << rhs.getExecGrade() << std::endl;
	return (o);
}