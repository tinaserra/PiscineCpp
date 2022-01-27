/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:45:47 by vserra            #+#    #+#             */
/*   Updated: 2022/01/27 14:19:50 by vserra           ###   ########.fr       */
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
		else if (cmd == "SEARCH")
		{
			phonebook.search();
		}
	}

	return 0;
}