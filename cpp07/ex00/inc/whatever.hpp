/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:50:31 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 15:51:06 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;

	return ;
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

#endif
