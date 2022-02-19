/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:07:39 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:32:12 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static std::string str("\033[1m[Intern]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Intern::Intern(void)
{
	std::cout << str << " Default constructor called" << std::endl;
	_formName[0] = "shrubbery creation";
	_formName[1] = "robotomy request";
	_formName[2] = "presidential pardon";
}

Intern::Intern(Intern const & save)
{
	(void)save;
	*this = save;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Intern::~Intern(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm	*form;
	AForm	*(Intern::*f[3])(std::string) = {
		&Intern::_makeShrubberyCreation,
		&Intern::_makeRobotomyRequest,
		&Intern::_makePresidentialPardon
	};

	for (unsigned int i = 0; i < 3; i++)
	{
		if (!_formName[i].compare(name))
		{
			form = (this->*(f[i]))(target);
			std::cout << str << " create " << form->getName() << std::endl;
			return (form);
		}
	}
	throw Intern::WrongFormNameException();
	// std::cerr << "Incorrect name of form !" << std::endl;
	return NULL;
}

AForm	*Intern::_makeShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::_makeRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::_makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Intern	&Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return (*this);
}