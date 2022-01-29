/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:16:02 by vserra            #+#    #+#             */
/*   Updated: 2022/01/29 12:01:50 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie(void);

		void announce(void);
		void giveName(std::string name);

	private:
		std::string _name;
		std::string _getName() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif