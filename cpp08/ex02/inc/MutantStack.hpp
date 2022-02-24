/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:26:45 by vserra            #+#    #+#             */
/*   Updated: 2022/02/24 17:11:09 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		MutantStack(MutantStack const & save) : std::stack<T>(save) {}
		virtual ~MutantStack(void) {}

		MutantStack<T>	&operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}

		typedef typename	std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

#endif