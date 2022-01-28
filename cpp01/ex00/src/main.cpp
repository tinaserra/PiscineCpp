/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:06:15 by vserra            #+#    #+#             */
/*   Updated: 2022/01/28 16:06:16 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "# newZombie:" << std::endl;
	newZombie("Mireille");
	std::cout << "# randomChump:" << std::endl;
	randomChump("Matthieu");
	std::cout << "# Done" << std::endl;

	return (0);
}