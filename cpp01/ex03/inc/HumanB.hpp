/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:02:22 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 13:25:08 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);

		void attack(void);

	private:
		std::string _name;
		Weapon* _weapon;
};

#endif