/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 14:04:15 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------- *" << std::endl;
	Bureaucrat mireille("\033[34mMireille\033[0m", 1);
	Bureaucrat matthieu("\033[33mMatthieu\033[0m", 150);
	Form charles("*CL16*", 5, 150);
	Form lewis("*LH44*", 1, 150);
	Form pierre("*PG10*", 149, 150);
	Form lando("*LN04*", 149, 150);
	Form daniel("*DR03*", 50, 150);
	Form george("*GR63*", 50, 150);
	Form jules("*JB17*", 50, 150);
	Form kimi("*KR07*", 50, 150);
	Form fernando("*FA14*", 50, 150);
	Form sebastian("*SV01*", 50, 150);
	Form socon("*SO31*", 50, 150);
	Form romain("*RG08*", 50, 150);
	Form carlos("*CS55*", -1, 150);
	Form sergio("*SP11*", 151, 150);
	try
	{
		Form max("*MV33*", 0, 150);
		Form carlos("*CS55*", -1, 150);
		Form sergio("*SP11*", 151, 150);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1m" << charles << "\033[0m";
	mireille.signForm(charles);
	matthieu.signForm(charles);

	std::cout << std::endl << "\033[1m" << lewis << "\033[0m";
	mireille.signForm(lewis);
	matthieu.signForm(lewis);

	std::cout << std::endl << "\033[1m" << lando << "\033[0m";
	mireille.signForm(lando);
	matthieu.signForm(lando);

	// std::cout << std::endl << "\033[1m" << carlos << "\033[0m";
	// mireille.signForm(carlos);
	// matthieu.signForm(carlos);

	std::cout << std::endl << "\033[1m" << pierre << "\033[0m";
	mireille.signForm(pierre);
	matthieu.signForm(pierre);
	matthieu.increaseGrade();
	std::cout << "\033[1mIncrease Grade:\033[0m " << matthieu << std::endl;
	matthieu.signForm(pierre);
	
	// matthieu.decreaseGrade();
	std::cout << std::endl << "*" << "\033[1;32m Destructors \033[0m------------- *" << std::endl;
	return (0);
}