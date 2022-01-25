/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:19:00 by vserra            #+#    #+#             */
/*   Updated: 2022/01/25 20:36:33 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class phonebook
{
	public:
		phonebook();
		virtual ~phonebook();

		/* mes fonctions */
		void print_man();
		void print_search_tab();
		void add(void);
		void search(void);

	private:
		contact	contacts[8];
		int		total;
};

#endif