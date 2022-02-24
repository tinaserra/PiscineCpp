/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:43:54 by vserra            #+#    #+#             */
/*   Updated: 2022/02/24 16:00:57 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

class		Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & save);
		~Span(void);

		Span				&operator=(Span const & rhs);

		std::vector<int>	getArray(void) const;

		void				addNumber(int const nb);
		void				addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);


		// Exceptions
		class NotEnoughSpace : public std::exception
		{
			virtual const char* what() const throw()
			{ 
				return ("\033[1;31mNot enough space in the span to add the range.\033[0m");
			}
		};

		class Full : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\033[1;31mSpan is full.\033[0m");
			}
		};

		class NoSpan : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\033[1;31mNot enough values to do a span.\033[0m"); 
			}
		};

	private:
		unsigned int 		_N;
		std::vector<int>	_array;
};

std::ostream &	operator<<(std::ostream & o, Span const & rhs);

#endif