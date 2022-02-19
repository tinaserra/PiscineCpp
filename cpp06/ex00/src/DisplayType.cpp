/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:51:57 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 18:54:58 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DisplayType.hpp"

DisplayType::DisplayType(void)
{
	return ;
}

DisplayType::DisplayType(std::string arg) : _arg(arg)
{
	return ;
}

DisplayType::DisplayType(DisplayType const & save)
{
	*this = save;
	return ;
}

DisplayType::~DisplayType(void)
{
	return ;
}

DisplayType &	DisplayType::operator=(DisplayType const & rhs)
{
	if (this != &rhs)
		_arg = rhs._arg;
	return (*this);
}

