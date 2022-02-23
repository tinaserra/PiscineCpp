/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:11:31 by vserra            #+#    #+#             */
/*   Updated: 2022/02/23 15:37:25 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <limits>

# define KEY ""

static std::string input;

int main()
{
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Simple tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
		std::vector<int> vec;

		vec.push_back(2);
		vec.push_back(-5);
		vec.push_back(99);
		vec.push_back(0);

		std::cout << "vector : \033[1m";
		for (unsigned int i = 0; i < vec.size(); i++)
		{
			std::cout << vec[i] << " ";
		}
		std::cout << "\033[0m" << std::endl;

		std::vector<int>::iterator toFind;
		try
		{
			toFind = easyfind(vec, 99);
			std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			toFind = easyfind(vec, 0);
			std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			toFind = easyfind(vec, -5);
			std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "Search: 10000" << std::endl;
			toFind = easyfind(vec, 10000);
			std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %20);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %20;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}

	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %100);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %100;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %15;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %15);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %5;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %5;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %5);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %5;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %50;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %4);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %5;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %50;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %24);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %5;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random RAND_MAX tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %RAND_MAX);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %RAND_MAX;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random RAND_MAX tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %RAND_MAX);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %RAND_MAX;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random RAND_MAX tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %RAND_MAX);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %RAND_MAX;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random RAND_MAX tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %RAND_MAX);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %RAND_MAX;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
	std::cout << std::endl << "Please, press ENTER" << KEY << std::endl;
	std::getline(std::cin, input);
	system ("clear");
	std::cout << std::endl << "*" << "\033[1;34m Random RAND_MAX tests \033[0m------------------------------------- *" << std::endl;
	if (input == KEY)
	{
			std::vector<int> vec;
			/* Generate random vector */
			srand (time(NULL));
			size_t size = rand() %20;
			for (size_t i = 0; i < size; i++)
				vec.push_back(rand() %RAND_MAX);
			/* Print vector */
			std::cout << "vector : \033[1m";
			for (unsigned int i = 0; i < vec.size(); i++)
			{
				std::cout << vec[i] << " ";
			}
			std::cout << "\033[0m" << std::endl;
			/* Generate random number to find */
			int nb = rand() %RAND_MAX;
			std::vector<int>::iterator toFind;
			try
			{
				std::cout << "Search: " << nb << std::endl;
				toFind = easyfind(vec, nb);
				std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	}
}