/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 14:59:08 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------- *" << std::endl;
	Bureaucrat mireille("\033[34mMireille\033[0m", 1);
	Bureaucrat matthieu("\033[33mMatthieu\033[0m", 150);
	Form charles = Form();
	Form lewis = Form();
	Form pierre = Form();
	Form lando = Form();
	Form daniel = Form();
	Form george = Form();
	Form jules = Form();
	Form kimi = Form();
	Form fernando = Form();
	Form sebastian = Form();
	Form socon = Form();
	Form romain = Form();
	Form max = Form();
	Form carlos = Form();
	Form sergio = Form();
	try
	{
		charles = Form("*CL16*", 5, 150);
		lewis = Form("*LH44*", 1, 150);
		pierre = Form("*PG10*", 149, 150);
		lando = Form("*LN04*", 149, 150);
		daniel =Form("*DR03*", 50, 150);
		daniel = Form("*GR63*", 50, 150);
		jules = Form("*JB17*", 50, 150);
		kimi = Form("*KR07*", 50, 150);
		fernando = Form("*FA14*", 50, 150);
		sebastian = Form("*SV01*", 50, 150);
		socon = Form("*SO31*", 50, 150);
		romain = Form("*RG08*", 50, 150);
		max = Form("*MV33*", 0, 150);
		carlos = Form("*CS55*", -1, 150);
		sergio = Form("*SP11*", 151, 150);
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
