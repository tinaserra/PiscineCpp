/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:50:17 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 20:55:06 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cmath>

class	DisplayType
{
	public:
		DisplayType(void);
		DisplayType(std::string arg);
		DisplayType(DisplayType const & save);
		~DisplayType(void);

		DisplayType	&operator=(DisplayType const & rhs);

		void	char_conv(void);
		void	int_conv(void);
		void	float_conv(void);
		void	double_conv(void);

	private:
		std::string		_arg;
};

#endif