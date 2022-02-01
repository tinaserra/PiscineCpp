/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:44:29 by vserra            #+#    #+#             */
/*   Updated: 2022/02/01 14:11:22 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{ 
    if (ac != 4)
    {
        std::cerr << "Wrong arguments" << std::endl;   
        return (1);
    }

    std::string s1 = av[2];
    std::string s2 = av[3];
    if (!s1.compare(s2))
    {
		std::cerr << "Same sentences" << std::endl;
		return (1);
	}

    /* open file */
    std::ifstream file(av[1]);
	if (!file.is_open())
    {
		std::cerr << "Error: open file: " << av[1] << std::endl;
		return (1);
    }

    /* create and open a new file */
    std::string ext (".replace");
    std::string new_file = av[1] + ext;
    std::ofstream file2(new_file.c_str());
	if (!file2.is_open()) {
		std::cerr << "Error: open/create file: " << new_file << std::endl;
		return (1);
	}

    /* replace occurences */
    std::string line;
    std::string tmp;
    size_t s1_len = s1.size();
    size_t pos = 0;
    while (std::getline(file, line))
    {
        while ((pos = line.find(av[2])) != std::string::npos)
        {
            line.erase(pos, s1_len);
            line.insert(pos, av[3]);
        }
        tmp += line + '\n';
    }
    file2 << tmp;

    /* close files */
	file.close();
	file2.close();
	return (0);
}