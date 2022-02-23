/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:57:10 by vserra            #+#    #+#             */
/*   Updated: 2022/02/23 14:34:54 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

class NotFound : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Not found");
	}
};

template<typename T>
typename T::iterator	easyfind(T & array, int n)
{
	typename T::iterator toFind = std::find(array.begin(), array.end(), n);

	if (toFind == array.end())
		// throw NotFound();
		throw std::invalid_argument("\033[1;31mNot found\033[0m");
	return (toFind);
}


#endif