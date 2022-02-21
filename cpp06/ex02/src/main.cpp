/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:03:55 by tinaserra         #+#    #+#             */
/*   Updated: 2022/02/21 01:14:35 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	Base*	p;
	int i = rand() % 3;
	std::cout << i << std::endl;
	switch(i)
	{
		case 0:
			std::cout << "\033[1m[Base A]\033[0m generated" << std::endl;
			p = new A();
			break;
		case 1:
			std::cout << "\033[1m[Base B]\033[0m generated" << std::endl;
			p = new B();
			break;
		case 2:
			std::cout << "\033[1m[Base C]\033[0m generated" << std::endl;
			p = new C();
			break;
	}
	return p;
}

void	identify(Base* p)
{
	std::cout << "Pointer *" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	A a;
	B b;
	C c;

	std::cout << "Reference &" << std::endl;
	try 
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} 
	catch (std::exception & e) 
	{
		try 
		{
			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception & e) 
		{
			try 
			{
				c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception & e)
			{
			}
		}
	}
}

int main(void)
{
	Base *p;

	srand(time(NULL));
	p = generate();
	identify(p);
	identify(*p);
}