/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:12:56 by vserra            #+#    #+#             */
/*   Updated: 2022/02/17 21:38:09 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat mireille("\033[34mMireille\033[0m", 1);
	Bureaucrat matthieu("\033[33mMatthieu\033[0m", 150);
	Form form1("*264920*", 5, 1);
	Form form2("*971004*", 50, 20);

	std::cout << std::endl;
	mireille.signForm(form1);
	matthieu.signForm(form2);

	matthieu.increaseGrade();
	matthieu.decreaseGrade();

	return (0);
}