/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:45:47 by vserra            #+#    #+#             */
/*   Updated: 2022/01/25 23:37:35 by vserra           ###   ########.fr       */
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