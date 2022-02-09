/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:46:26 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 22:06:45 by vserra           ###   ########.fr       */
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
		Animal(Animal const & ref);
		virtual ~Animal(void);
		
		Animal			&operator=(Animal const & ref);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif