/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:17:48 by vserra            #+#    #+#             */
/*   Updated: 2022/01/25 23:43:06 by vserra           ###   ########.fr       */
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

/*    ADD
 *
 * -> Le programme invitera l’utilisateur à saisir de nouvelles informations de contact,
 *    un champ à la fois, jusqu’à ce que chaque champ soit rempli.
 * -> Un contact contient les champs suivants : first name, last name, nickname,
 *    phone number,darkest secret.
 * -> Le PhoneBook doit être représenté comme une instance d’une classe dans votre
 *    code, il doit contenir un tableau de contacts.
 * -> Un contact DOIT être représenté comme une instance d’une classe dans votre
 *    code. Vous êtes libre de concevoir la classe comme vous le souhaitez, mais
 *    l’évaluation vérifiera la cohérence de vos choix. Regardez à nouveau les vidéos
 *    d’aujourd’hui si vous ne comprenez pas ce que je veux dire (et je ne veux pas
 *    dire "utilisez tout" avant de demander).
*/

void	phonebook::add()
{
	if (this->total == 8)
		std::cout << "The phone book is full !" << std::endl;
	else
	{
		this->contacts[this->total].get_data(this->total + 1);
		this->total++;
	}
}

/*
 *    SEARCH
 * -> Le programme affichera une liste des contacts disponibles non vides dans 4
 *    colonnes : index, first name, last name and nickname.
 * -> Chaque colonne doit avoir une largeur de 10 caractères, le contenu doit être
 *    aligné à droite, et chaque colonne séparée par le caractère ’|’. Toute sortie
 *    plus longue que la largeur des colonnes est tronquée et le dernier caractère
 *    affichable est remplacé par un point (’.’).
 * -> Ensuite, le programme demandera à nouveau pour l’index de l’entrée souhaitée
 *    et affichera les coordonnées du contact, un champ par ligne. Si l’entrée n’a
 *    aucun sens, définir un comportement pertinent.
*/

void	phonebook::search()
{
	// si le total vaut 0 -> print un message pour dire d'ajouter un contact
	if (this->total == 0)
		std::cout << "You must add a contact" << std::endl;

	// sinon print les contacts print_search_tab
	else
	{
		this->print_search_tab();
	// dire a l'utilisateur de rentrer un index pour aficher les infos sur un contact ou 0 pour exit
		std::cout << "Enter a contact number to display informations" << std::endl;
		int id;
		while (std::cin >> id)
		{
			if (id < 0 || id > 8)
			{
				std::cin.clear();
				std::cout << "Wrong contact number" << std::endl;
			}
		}
		if (id > 0)
			this->contacts[id].print_contact_data();
	}
	// check si l'index est valide
	// print les infos du contct demande par le user
}