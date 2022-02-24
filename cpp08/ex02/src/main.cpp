/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:26:03 by vserra            #+#    #+#             */
/*   Updated: 2022/02/24 17:06:11 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

/*
 * empty:	Test whether container is empty (public member function )
 * size:	Return size (public member function )
 * top:		Access next element (public member function )
 * push:	Insert element (public member function )
 * pop:		Remove top element (public member function )
 */


int	main()
{
	{
		std::cout << "* \033[1;34mMutantStack\033[0m ---------------- *" << std::endl;
		MutantStack<int> mutantStack;
		std::cout << "[mutant stack] push 44 and 55" << std::endl;
		mutantStack.push(44);
		mutantStack.push(55);
		std::cout << "[mutant stack] top: " << mutantStack.top() << std::endl;
		std::cout << "[mutant stack] pop " << std::endl;
		mutantStack.pop();
		std::cout << "[mutant stack] size: " << mutantStack.size() << std::endl;
		std::cout << "[mutant stack] push values" << std::endl;
		mutantStack.push(3);
		mutantStack.push(666);
		mutantStack.push(878);
		mutantStack.push(0);
		mutantStack.push(42);
		mutantStack.push(42);
		MutantStack<int>::iterator it_begin = mutantStack.begin();
		MutantStack<int>::iterator it_end = mutantStack.end();
		std::cout << "[mutant stack]: " << std::endl;
		while (it_begin != it_end)
		{
			std::cout << *it_begin << std::endl;
			++it_begin;
		}
		std::cout << "[mutant stack] top:  " << mutantStack.top() << std::endl;
		std::cout << "[mutant stack] size: " << mutantStack.size() << std::endl;
		
		std::cout <<std::endl;
		std::cout << "* \033[1mStack\033[0m ---------------------- *" << std::endl;
		std::stack<int> s(mutantStack);
		std::cout << "[stack] top:  " << s.top() << std::endl;
		std::cout << "[stack] size: " << s.size() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "* \033[1;34mList\033[0m ----------------------- *" << std::endl;
		std::list<int> l;
		std::cout << "[list] push 44 and 55" << std::endl;
		l.push_back(44);
		l.push_back(55);
		std::cout << "[list] back: " << l.back() << std::endl;
		std::cout << "[list] pop_back " << std::endl;
		l.pop_back();
		std::cout << "[list] size: " << l.size() << std::endl;
		std::cout << "[list] push values" << std::endl;
		l.push_back(25);
		l.push_back(666);
		l.push_back(78);
		l.push_back(90);
		l.push_back(999999);
		std::list<int>::iterator it_begin = l.begin();
		std::list<int>::iterator it_end = l.end();
		std::cout << "[list]: " << std::endl;
		while (it_begin != it_end)
		{
			std::cout << *it_begin << std::endl;
			++it_begin;
		}
		std::cout << "[list] back: " << l.back() << std::endl;
		std::cout << "[list] size: " << l.size() << std::endl;
		
		std::cout <<std::endl;
		std::cout << "* \033[1mStack\033[0m ---------------------- *" << std::endl;
		std::list<int> s(l);
		std::cout << "[stack] back: " << s.back() << std::endl;
		std::cout << "[stack] size: " << s.size() << std::endl;


		
		// std::cout << "List:" << std::endl;
		// std::list<int> l;
		// l.push_back(5);
		// l.push_back(17);
		// std::cout << l.back() << std::endl;
		// l.pop_back();
		// std::cout << l.size() << std::endl;
		// l.push_back(3);
		// l.push_back(5);
		// l.push_back(737);
		// //[...]
		// l.push_back(0);
		// l.push_back(42);
		// std::list<int>::iterator it = l.begin();
		// std::list<int>::iterator ite = l.end();
		// ++it;
		// --it;
		// std::cout << "-------------" <<std::endl;
		// while (it != ite)
		// {
		// 	std::cout << *it << std::endl;
		// 	++it;
		// }
		// std::cout << "-------------" <<std::endl;
		// std::list<int> s(l);
		// std::cout << "s.back() = " << s.back() << std::endl;
	}
	
	return (0);
}