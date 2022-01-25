/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:19:16 by vserra            #+#    #+#             */
/*   Updated: 2022/01/25 23:23:11 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class contact
{
	public:
		contact();
		virtual ~contact();

		/* mes fonctions membres */
		bool get_data(int index);
		void print_search_contacts();
		void print_contact_data();

	private:
		int index;
		static std::string info[5]; // ne peut pas etre utilise dans un objet mais est utilise directement dans la clasee
		std::string data[11];
};

#endif