/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:14:15 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 13:25:03 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>
#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack(void);

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif