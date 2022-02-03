/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:58:26 by vserra            #+#    #+#             */
/*   Updated: 2022/02/03 15:27:20 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	int lvl;
	if (ac != 2) {
		std::cerr << "Wrong argument" << std::endl;
		return (1);
	}
	for (lvl = 0; lvl < 4; lvl++)
		if (av[1] == karen.getLevel(lvl))
			break ;

	switch (lvl)
	{
		case 0:
			karen.complain("DEBUG");
            karen.complain("INFO");
            karen.complain("WARNING");
            karen.complain("ERROR");
			break;
		case 1:
			karen.complain("INFO");
            karen.complain("WARNING");
            karen.complain("ERROR");
			break;
		case 2:
			karen.complain("WARNING");
            karen.complain("ERROR");
			break;
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}