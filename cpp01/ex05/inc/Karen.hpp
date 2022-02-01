/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:32:52 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 15:46:35 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen
{
	public:
		Karen();
		~Karen();
		void complain(std::string level);

	private:
		std::string _levels[4];
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
};

#endif