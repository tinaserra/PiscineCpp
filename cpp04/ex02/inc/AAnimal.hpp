/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:46:26 by vserra            #+#    #+#             */
/*   Updated: 2022/02/14 08:58:19 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

/*
 * Une classe abstraite est une classe ayant au moins une méthode virtuelle pure.
 * De fait, elle est non instanciable.
 * Une méthode virtuelle pure est une méthode qui est déclarée 
 * mais non définie dans une classe. 
 * Elle est définie dans une des classes dérivées de cette classe.
 * =0 signifie ici qu'il n'y a pas d'implémentation de cette méthode dans cette classe.
*/

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & rhs);
		virtual ~AAnimal(void);

		std::string		getType(void) const;

		AAnimal			&operator=(AAnimal const & rhs);
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type;
};

#endif