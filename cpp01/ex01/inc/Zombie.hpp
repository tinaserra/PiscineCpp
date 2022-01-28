/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:16:02 by vserra            #+#    #+#             */
/*   Updated: 2022/01/28 18:49:58 by vserra           ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void);
        std::string	getName() const;
        void giveName(std::string name);

    private:
        std::string _name;    
};

Zombie* zombieHorde(int N, std::string name);

#endif