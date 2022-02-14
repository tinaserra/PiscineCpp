/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:46:26 by vserra            #+#    #+#             */
/*   Updated: 2022/02/13 15:05:53 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & rhs);
		virtual ~Animal(void);

		std::string		getType(void) const;

		Animal			&operator=(Animal const & rhs);
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif