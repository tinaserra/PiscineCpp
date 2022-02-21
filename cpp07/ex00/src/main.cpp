/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:49:21 by vserra            #+#    #+#             */
/*   Updated: 2022/02/21 16:50:01 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n !=rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }

	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	int	nb1 = 9;
	int	nb2 = 1;
	std::cout << std::endl << "\033[1;37m[INT]: " << nb1 << " " <<  nb2 << "\033[0m" << std::endl;

	swap(nb1, nb2);
	std::cout << "swap: " << nb1 << " " <<  nb2 << std::endl;
	std::cout << "max:  " << max(nb1, nb2) << std::endl;
	std::cout << "min:  " << min(nb1, nb2) << std::endl;

	char	c1 = 'D';
	char	c2 = 'P';
	std::cout << std::endl << "\033[1;37m[CHAR]: " << c1 << " " <<  c2 << "\033[0m" << std::endl;

	swap(c1, c2);
	std::cout << "swap: " << c1 << " " <<  c2 << std::endl;
	std::cout << "max:  " << max(c1, c2) << std::endl;
	std::cout << "min:  " << min(c1, c2) << std::endl;

	std::string	s1 = "\033[34mLe ciel est bleu\033[0m";
	std::string	s2 = "\033[32mLe temps est bon\033[0m";
	std::cout << std::endl << "\033[1;37m[STRING]: " << s1 << " " <<  s2 << "\033[0m" << std::endl;

	swap(s1, s2);
	std::cout << "swap: " << s1 << " " <<  s2 << std::endl;
	
	Awesome a(2), b(4);
	std::cout << std::endl << "\033[1;37m[CLASS]: " << a << " " <<  b << "\033[0m" << std::endl;

	swap(a, b);
	std::cout << "swap: " << a << " " << b << std::endl;
	std::cout << "max:  " << max(a, b) << std::endl;
	std::cout << "min:  " << min(a, b) << std::endl;

	return (0);
}