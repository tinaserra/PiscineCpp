/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:20:13 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 20:28:20 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

static std::string str("\033[1m[ShrubberyCreationForm]\033[0m");

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm(void)
		: AForm("shrubbery creation", 145, 137, "")
{
	std::cout << str << " Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: AForm("shrubbery creation", 145, 137, target)
{
	std::cout << str << " Target constructor called: " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & save) : AForm(save)
{
	std::cout << str << " Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << str << " Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream		o;
	std::string const	file = _target + "_shrubbery";

	try
	{
		AForm::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	o.open(file.c_str(), std::ofstream::trunc | std::ofstream::out);
	if (!o.is_open())
	{
		std::cerr << "[ShrubberyCreationForm] execute: Fail to open file" << std::endl;
		return (false);
	}
	o	<< "                 ,@@@@@@@,"                       << std::endl
		<< "         ,,,.   ,@@@@@@/@@,  .oo8888o."           << std::endl
		<< "      ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"         << std::endl
		<< "     ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"      << std::endl
		<< "     %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"       << std::endl
		<< "     %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"        << std::endl
		<< "     `&%\\ ` /%&'    |.|        \\ '|8'"          << std::endl
		<< "         |o|        | |         | |"              << std::endl
		<< "         |.|        | |         | |"              << std::endl
		<< "       \\/ ._\\//_/__/  ,\\_//__\\ /.  \\_//__/_" << std::endl;
		o.close();
		return (true);
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}
