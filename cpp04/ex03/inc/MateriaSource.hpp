/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:30:16 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/15 21:02:19 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);
		MateriaSource		&operator=(MateriaSource const & rhs);
		
		void				learnMateria(AMateria *toLearn);
		AMateria *			createMateria(std::string const & type);

	private:
		AMateria *_materias[4];
};

#endif