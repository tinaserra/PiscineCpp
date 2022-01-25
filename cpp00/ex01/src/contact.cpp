/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:18:06 by vserra            #+#    #+#             */
/*   Updated: 2022/01/25 23:40:17 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string contact::info[5] = {
	"first Name",
	"last Name",
	"nickname",
	"phone number",
	"darkest secret"
};

contact::contact()
{
	for (int i = 0; i < 5; i++)
		this->data[i] = std::string();
}

contact::~contact()
{
}

bool contact::get_data(int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter a " << contact::info[i] << ":" << std::endl;
		std::getline(std::cin, this->data[i]);

		// if (this->data[i].length() == 0)
		// {
		// 	std::cout << "Contact not added !" << std::endl;
		// 	return (false);
		// }
	}
	std::cout << "Contact added !" << std::endl;
	return (true);
}

void contact::print_search_contacts()
{
	std::cout << "|" << "........." << this->index;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->data[i] << " |";
	}
	std::cout << "|" << std::endl;
}

void contact::print_contact_data()
{
	std::cout << "Contact nº" << this-index << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << contact::info[i] << ": " << this->data[i] << std::endl;
}