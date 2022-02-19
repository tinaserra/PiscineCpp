/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:26:27 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 20:32:00 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

static std::string str("\033[1m[RobotomyRequestForm]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm(void)
		: AForm("robotomy request", 72, 45, "")
{
	std::cout << str << " Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: AForm("robotomy request", 72, 45, target)
{
	std::cout << str << " Target constructor called: " << _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & save) : AForm(save)
{
	std::cout << str << " Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	rand;

	try
	{
		AForm::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	std::cout << "*DRILL NOISES* BRRRRRRRR" << std::endl;
	std::srand(std::time(NULL));
	rand = std::rand() % 2;
	if (rand)
		std::cout << this->_target << " has been robotomized !" << std::endl;
	else
		std::cout << "FAILURE.." << std::endl;
	return (true);
}
/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}