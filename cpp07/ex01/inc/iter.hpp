/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:55:00 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 17:05:02 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const * array, size_t const lenght, void(*f)(T const & arg))
{
	for (size_t i = 0; i < lenght; i++)
		f(array[i]);
	return ;
}

#endif
