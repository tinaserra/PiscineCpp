/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:29:51 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>
# define KEY ""

static std::string input;

int	main()
{
	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------------------ *" << std::endl;
	Bureaucrat LH44("\033[33mLewis *LH44*\033[0m", 1);
	Bureaucrat CL16("\033[33mCharles *CL16*\033[0m", 5);
	Bureaucrat CS55("\033[33mCarlos *CR55*\033[0m", 6);
	Bureaucrat JB17("\033[33mJules *JB17*\033[0m", 17);
	Bureaucrat PG10("\033[33mPierre *PG10*\033[0m", 45);
	Bureaucrat GR63("\033[33mGeorges *GR63*\033[0m", 72);
	Bureaucrat KR07("\033[33mKimi *KR07*\033[0m", 137);
	Bureaucrat DR03("\033[33mDaniel *DR03*\033[0m", 145);
	Bureaucrat LN04("\033[33mLando *LN04*\033[0m", 150);

	Intern intern;
	AForm	*presidential = intern.makeForm("presidential pardon", "Toto Wolf");
	AForm	*robotomy = intern.makeForm("robotomy request", "Micheal Masi");
	AForm	*shrubbery = intern.makeForm("shrubbery creation", "trees");

	try
	{
		AForm	*lol = intern.makeForm("lol creation", "trees");
		(void)lol;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	// AForm	*lol = intern.makeForm("lol creation", "trees");

	// LH44.signForm(*lol);
	// 	LH44.executeForm(*lol);

	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m ShrubberyCreationForm \033[0m--------------- *" << std::endl;

		std::cout << std::endl << "\033[1m" << *shrubbery << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*shrubbery);
		LN04.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*shrubbery);
		DR03.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*shrubbery);
		KR07.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*shrubbery);
		GR63.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*shrubbery);
		PG10.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*shrubbery);
		JB17.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*shrubbery);
		CS55.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*shrubbery);
		CL16.executeForm(*shrubbery);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*shrubbery);
		LH44.executeForm(*shrubbery);
		std::cout << std::endl;
		delete shrubbery;
	}

	std::cout << std::endl << "Please, press ENTER"<< std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m RobotomyRequestForm \033[0m--------------- *" << std::endl;
		std::cout << std::endl << "\033[1m" << *robotomy << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*robotomy);
		LN04.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*robotomy);
		DR03.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*robotomy);
		KR07.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*robotomy);
		GR63.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*robotomy);
		PG10.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*robotomy);
		JB17.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*robotomy);
		CS55.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*robotomy);
		CL16.executeForm(*robotomy);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*robotomy);
		LH44.executeForm(*robotomy);
		std::cout << std::endl;
		delete robotomy;
	}

	std::cout << std::endl << "Please, press enter" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m PresidentialPardonForm \033[0m--------------- *" << std::endl;
		std::cout << std::endl << "\033[1m" << *presidential << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*presidential);
		LN04.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*presidential);
		DR03.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*presidential);
		KR07.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*presidential);
		GR63.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*presidential);
		PG10.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*presidential);
		JB17.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*presidential);
		CS55.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*presidential);
		CL16.executeForm(*presidential);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*presidential);
		LH44.executeForm(*presidential);
		std::cout << std::endl;
		delete presidential;
	}

	std::cout << std::endl << "*" << "\033[1;32m Destructors \033[0m------------- *" << std::endl;
	return (0);
}
