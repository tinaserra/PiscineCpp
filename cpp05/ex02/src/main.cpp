/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 21:09:55 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
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

	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m ShrubberyCreationForm \033[0m--------------- *" << std::endl;
		AForm *form = new ShrubberyCreationForm("trees");
		std::cout << std::endl << "\033[1m" << *form << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*form);
		LN04.executeForm(*form);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*form);
		DR03.executeForm(*form);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*form);
		KR07.executeForm(*form);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*form);
		GR63.executeForm(*form);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*form);
		PG10.executeForm(*form);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*form);
		JB17.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*form);
		CS55.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*form);
		CL16.executeForm(*form);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*form);
		LH44.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}

	std::cout << std::endl << "Please, press ENTER"<< std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m RobotomyRequestForm \033[0m--------------- *" << std::endl;
		AForm *form = new RobotomyRequestForm("newTarget");
		std::cout << std::endl << "\033[1m" << *form << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*form);
		LN04.executeForm(*form);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*form);
		DR03.executeForm(*form);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*form);
		KR07.executeForm(*form);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*form);
		GR63.executeForm(*form);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*form);
		PG10.executeForm(*form);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*form);
		JB17.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*form);
		CS55.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*form);
		CL16.executeForm(*form);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*form);
		LH44.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}

	std::cout << std::endl << "Please, press enter" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	if (input == KEY)
	{
		std::cout << std::endl << "*" << "\033[1;34m PresidentialPardonForm \033[0m--------------- *" << std::endl;
		AForm *form = new PresidentialPardonForm("Toto Wolf");
		std::cout << std::endl << "\033[1m" << *form << "\033[0m";
		std::cout << std::endl << "\33[4m" << LN04 << "\33[0m" << std::endl;
		LN04.signForm(*form);
		LN04.executeForm(*form);
		std::cout << std::endl << "\33[4m" << DR03 << "\33[0m" << std::endl;
		DR03.signForm(*form);
		DR03.executeForm(*form);
		std::cout << std::endl << "\33[4m" << KR07 << "\33[0m" << std::endl;
		KR07.signForm(*form);
		KR07.executeForm(*form);
		std::cout << std::endl << "\33[4m" << GR63 << "\33[0m" << std::endl;
		GR63.signForm(*form);
		GR63.executeForm(*form);
		std::cout << std::endl << "\33[4m" << PG10 << "\33[0m" << std::endl;
		PG10.signForm(*form);
		PG10.executeForm(*form);
		std::cout << std::endl << "\33[4m" << JB17 << "\33[0m" << std::endl;
		JB17.signForm(*form);
		JB17.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CS55 << "\33[0m" << std::endl;
		CS55.signForm(*form);
		CS55.executeForm(*form);
		std::cout << std::endl << "\33[4m" << CL16 << "\33[0m" << std::endl;
		CL16.signForm(*form);
		CL16.executeForm(*form);
		std::cout << std::endl << "\33[4m" << LH44 << "\33[0m" << std::endl;
		LH44.signForm(*form);
		LH44.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}

	// std::cout << std::endl;
	std::cout << std::endl << "*" << "\033[1;32m Destructors \033[0m------------- *" << std::endl;
	return (0);
}
