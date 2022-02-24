/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:43:22 by vserra            #+#    #+#             */
/*   Updated: 2022/02/24 14:06:54 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Span::~Span(void)
{
	return ;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::vector<int>	Span::getArray(void) const
{
	return (_array);
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Span::addNumber(int const nb)
{
	if (_array.size() < _N)
		_array.push_back(nb);
	else
		throw Span::Full();
	// std::sort(_array.begin(), _array.end());
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((end - begin) <= _N)
		_array.insert(_array.end(), begin, end);
	else
		throw(NotEnoughSpace());
}

unsigned int	Span::shortestSpan(void)
{
	std::sort(_array.begin(), _array.end());
	
	if (_array.size() < 2)
		throw Span::NoSpan();

	int min_span = 0;
	bool first = true;
	for (size_t i = 0; i < _array.size() - 1; i++)
	{
		if (first || _array[i + 1] - _array[i] < min_span)
		{
			min_span = _array[i + 1] - _array[i];
			first = false;
		}
	}
	return (min_span);
}

unsigned int	Span::longestSpan(void)
{
	if (_array.size() < 2)
		throw Span::NoSpan();

	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());

	return (max - min);
}


/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Span	&Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_array = rhs._array;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	std::vector<int>	array = rhs.getArray();

	for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
	{
		std::cout << *it;
		if (it != array.end() - 1)
			std::cout << " ";
	}
	return (o);
}