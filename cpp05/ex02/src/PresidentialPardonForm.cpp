/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:32:20 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 20:38:19 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

static std::string str("\033[1m[PresidentialPardonForm]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm(void)
		: AForm("presidential pardon", 25, 5, "")
{
	std::cout << str << " Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: AForm("presidential pardon", 25, 5, target)
{
	std::cout << str << " Target constructor called: " << _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & save) : AForm(save)
{
	std::cout << str << " Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

bool				PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		AForm::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	std::cout << this->_target << " has been forgiven by Zafod Beeblebrox" << std::endl;
	return (true);
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}