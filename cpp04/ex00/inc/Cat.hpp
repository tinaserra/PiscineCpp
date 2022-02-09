/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:48:01 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 21:49:37 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
// #include "Cat.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & ref);
		
		Cat	&operator=(Cat const & ref);
		void	makeSound(void) const;
};