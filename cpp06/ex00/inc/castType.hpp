/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:50:17 by vserra            #+#    #+#             */
/*   Updated: 2022/02/20 19:54:25 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTTYPE_HPP
# define CASTTYPE_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "limits.h"

typedef enum	e_mode
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
}				t_mode;

typedef			void (*converter)(std::string const & arg);

void			fromInt(std::string const & arg);
void			fromChar(std::string const & arg);
void			fromFloat(std::string const & arg);
void			fromDouble(std::string const & arg);

bool			detectChar(std::string arg);
bool			detectInt(std::string arg);
bool			detectFloat(std::string arg);
bool			detectDouble(std::string arg);
int				detectType(std::string arg);

#endif