/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:58:29 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 20:33:41 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

/*
 * Construction sans paramètres : crée un array vide.
 * Construction avec un paramètre de type unsigned int n :
 * crée un array de n éléments initialisés par défaut.
 * 
 * Conseil : Essayez de compiler int * a = new int(); puis affichez *a.
 * 
 * Construction par recopie et surcharge de l’opérateur d’affectation. Dans les deux
 * cas, après une copie, toute modification de l’array original ou de sa copie ne doit
 * pas impacter l’autre array.
 * 
 * Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire.
 * Toute allocation préventive (c’est-à-dire allouer de la mémoire en avance) est interdite.
 * Votre programme ne doit pas pouvoir accéder à une zone non allouée.
 * 
 * Les éléments doivent être accessibles grâce à l’opérateur d’indice : [ ].
 * 
 * En cas d’index invalide lors d’une tentative d’accès d’un élément en utilisant l’opérateur [ ], une std::exception est jetée.
 * 
 * Une fonction membre size() qui retourne le nombre d’éléments dans l’array.
 * Cette fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance courante
*/

template<typename T>
class	Array
{
	public:
		/* Constructors & Destructors */
		Array(void) : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const & save) : _array(NULL), _size(0) { *this = save; }
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
				virtual const char *what() const throw()
				{
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
