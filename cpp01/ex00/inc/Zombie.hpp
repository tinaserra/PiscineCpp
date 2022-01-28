/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:08:09 by vserra            #+#    #+#             */
/*   Updated: 2022/01/28 16:06:25 by vserra           ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void);

    private:
        std::string _name;    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif