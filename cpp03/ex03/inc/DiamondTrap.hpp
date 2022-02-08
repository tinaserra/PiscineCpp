/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:37:30 by vserra            #+#    #+#             */
/*   Updated: 2022/02/08 19:26:59 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// class Guerrier: public PersoFort, public PersoCourageux{
// public:
// 	Guerrier(const string& nom, int ptsDeCourage, int ptsDeForce)
// 		: Personnage(nom), // résout l'ambiguité sur l'initialisation de Personnage
// 		PersoCourageux(nom, ptsDeCourage),
// 		PersoFort (nom, ptsDeForce) {}
 
// };
 

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name); //, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
		DiamondTrap(DiamondTrap const & ref);
		~DiamondTrap(void);
		
		DiamondTrap	&operator=(DiamondTrap const & ref);
		void		attack(std::string const & target);
		void		whoAmI(void) const;

	private:
		std::string _name;
};

#endif