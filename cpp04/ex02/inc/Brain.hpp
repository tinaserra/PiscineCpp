/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:54:52 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/13 12:48:57 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & rhs);
		~Brain(void);

		std::string	getIdea(unsigned int index) const;
		void		setIdea(unsigned int index, std::string idea);

		void		printIdeas(void) const;
		Brain		&operator=(Brain const & rhs);

	private:
		std::string _ideas[100];
};

#endif