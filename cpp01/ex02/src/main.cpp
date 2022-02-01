/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:27:39 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 11:46:12 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "*" << "\033[1;34m Adress \033[0m------------ *" << std::endl;
    std::cout << "str: " << &str << std::endl;
    std::cout << "ptr: " << stringPTR << std::endl;
    std::cout << "ref: " << &stringREF << std::endl;

    std::cout << "*" << "\033[1;34m Values \033[0m------------ *" << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "ptr: " << *stringPTR << std::endl;
    std::cout << "ref: " << stringREF << std::endl;
    
    return (0);
}