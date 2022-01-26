/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:45:47 by vserra            #+#    #+#             */
/*   Updated: 2022/01/26 16:17:12 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main()
{
	phonebook	phonebook;
	std::string	cmd;

	phonebook.print_man();
	while (cmd != "EXIT")
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.add();
		}
		if (cmd == "SEARCH")
		{
			phonebook.search();
		}
	}

	return 0;
}