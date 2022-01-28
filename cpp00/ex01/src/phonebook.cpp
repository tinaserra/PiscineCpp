/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:17:48 by vserra            #+#    #+#             */
/*   Updated: 2022/01/27 21:35:41 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook() {
	this->total = 0;
}

phonebook::~phonebook() {
}

void	phonebook::print_man(void)
{
	std::cout << "Welcome in this Awesome Phone Book!" << std::endl;
	std::cout << "Enter your command : ADD, SEARCH or EXIT:" << std::endl;
}

void	phonebook::print_search_tab(void)
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->total; i++)
		this->contacts[i].print_search_contacts();
}

void	phonebook::add()
{
	if (this->total == 8)
		std::cout << "The phone book is full !" << std::endl;
	else
	{
		if (this->contacts[this->total].get_data(this->total + 1))
			this->total++;
	}
}

void	phonebook::search()
{
	if (this->total == 0)
		std::cout << "You must add a contact" << std::endl;
	else
	{
		this->print_search_tab();
		std::cout << "Enter a contact number to display informations or 0 to exit" << std::endl;
		int id = 0;
		while (!(std::cin >> id) || id < 0 || id > this->total)
		{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Wrong contact number" << std::endl;
				std::cout << "Try again with a number between 1 and " << this->total << std::endl;
		}
		if (id > 0)
			this->contacts[id - 1].print_contact_data();
	}
}