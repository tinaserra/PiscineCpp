/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:47:32 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << std::endl;
	{
		Bureaucrat matthieu("\033[33mMatthieu\033[0m", 150);
		try
		{
			matthieu.decreaseGrade();
			std::cout << matthieu << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << matthieu << std::endl;
		}

		try
		{
			matthieu.increaseGrade();
			std::cout << matthieu << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << matthieu << std::endl;
		}
	}

	std::cout << std::endl;
	{
		Bureaucrat mireille("\033[34mMireille\033[0m", 1);
		try
		{
			mireille.increaseGrade();
			std::cout << mireille << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << mireille << std::endl;
		}

		try
		{
			mireille.decreaseGrade();
			std::cout << mireille << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << mireille << std::endl;
		}
	}

	{
		std::cout << std::endl << "*" << "\033[1;31m Exceptions \033[0m--------------- *" << std::endl;
		Bureaucrat toto = Bureaucrat();
		Bureaucrat mick = Bureaucrat();
		try
		{
			toto = Bureaucrat("\033[1mToto Wolf\033[0m", 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			mick = Bureaucrat("\033[1mMichael Masi\033[0m", 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	return (0);
}