/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:53:17 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 21:54:07 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
// #include "Cat.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const & ref);
		
		WrongCat	&operator=(WrongCat const & ref);
		void	makeSound(void) const;
};