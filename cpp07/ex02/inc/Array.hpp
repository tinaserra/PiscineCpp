/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aray.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:58:29 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 18:14:22 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class	Array
{
	public:
		/* Constructors & Destructors */
		Array(void) : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const & src) : _array(NULL), _size(0) { *this = src; }
		~Array(void)
		{
			if (_array != NULL)
				delete [] _array;
		}

		/* Operators */
		Array	&operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				if (_size != 0 && _size != rhs._size && _array != NULL)
					delete [] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}

		T		&operator[](unsigned int const n) const
		{
			if (n >= _size)
				throw OutOfRange();
			else
				return (_array[n]);
		}

		/* Exceptions*/
		class	OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Out of range !");
				};
		};

		/* Member functions */
		unsigned int	size(void) const { return (_size); }

	private:
		T *				_array;
		unsigned int	_size;
};

#endif
