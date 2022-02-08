/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:21:32 by vserra            #+#    #+#             */
/*   Updated: 2022/02/08 14:22:31 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & rhs);
		~ScavTrap(void);
		
		ScavTrap	&operator=(ScavTrap const & rhs);
		void		attack(std::string const & target);
		void 		guardGate(void) const;

};

std::ostream &operator<<(std::ostream & o, ClapTrap const & rhs);

#endif