/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:52:00 by vserra            #+#    #+#             */
/*   Updated: 2022/02/09 21:53:03 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const & ref);
		
		WrongAnimal			&operator=(WrongAnimal const & ref);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif