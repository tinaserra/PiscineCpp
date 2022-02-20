/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:14:13 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/21 00:49:50 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);

	return (raw);
}

Data*	deserialize(uintptr_t raw)
{
	Data *	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main()
{
	Data		*data = new Data;
	uintptr_t	raw;

	data->value = 42;

	std::cout << "value: " << data->value << std::endl;
	
	std::cout << std::endl << "* Serialize ------- * " << std::endl;
	raw = serialize(data);
	std::cout << data << std::endl;
	std::cout << raw << std::endl;

	std::cout << std::endl << "* Deserialize ----- * " << std::endl;
	data = deserialize(raw);
	std::cout << data << std::endl;
	std::cout << raw << std::endl;

	delete data;

	return (0);
}