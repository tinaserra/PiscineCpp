/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:37:40 by vserra            #+#    #+#             */
/*   Updated: 2022/02/03 15:26:50 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Karen::Karen()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

Karen::~Karen()
{
}

/* -------------------------------------------------------------------------- */
/* FUNCTIONS MEMBER                                                           */
/* -------------------------------------------------------------------------- */

void	Karen::complain(std::string level)
{
	void (Karen::*f[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};


    for (int i = 0; i < 4; i++)
    {
        if (_levels[i] == level)
            (this->*f[i])();
    }
    std::cout << std::endl;
}

std::string	Karen::getLevel(int level) {
	return (_levels[level]);
}

void    Karen::_debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Karen::_info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::_warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::_error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
