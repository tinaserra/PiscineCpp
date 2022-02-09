/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:49:02 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 21:50:01 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
// #include "Cat.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & ref);
		
		Dog	&operator=(Dog const & ref);
		void	makeSound(void) const;
};