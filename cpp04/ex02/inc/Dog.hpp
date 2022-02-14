/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:49:02 by vserra            #+#    #+#             */
/*   Updated: 2022/02/14 08:58:35 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & rhs);

		Brain	&getBrain(void) const;

		void	makeSound(void) const;
		Dog		&operator=(Dog const & rhs);

	private:
		Brain	*_brain;
};

#endif