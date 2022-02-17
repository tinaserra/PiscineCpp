/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:17:12 by vserra            #+#    #+#             */
/*   Updated: 2022/02/17 20:47:28 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static std::string str("\033[1m[Form]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Form::Form(void) : _statut(false), _name(""), _signGrade(150), _execGrade(150)
{
	std::cout << str << " Default constructor called" << std::endl;
}

Form::Form(std::string const name, unsigned int signGrade, unsigned int execGrade)
		: _statut(false), _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << str << " Name constructor called: " << _name << std::endl;
}

Form::Form(Form const & save) : _statut(save._statut), _name(save._name), _signGrade(save._signGrade), _execGrade(save._execGrade)
{
	std::cout << str << " Copy constructor called" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Form::~Form(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string const	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_statut);
}

unsigned int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

unsigned int	Form::getExecGrade(void) const
{
	return (_execGrade);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else if (_statut)
		std::cout << "Form " << _name << " is already signed." << std::endl;
	else
		_statut = true;
	return ;
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Form	&Form::operator=(Form const & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed.";
	else
		o << " is not signed.";
	o	<< " Grade required for signature: " << rhs.getSignGrade() << "."
		<< " Grade required for execution: " << rhs.getExecGrade() << ".";
	return (o);
}