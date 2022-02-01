/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:59:55 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 13:24:56 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		std::string const &getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif