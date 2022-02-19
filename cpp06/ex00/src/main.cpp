/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:54:27 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 23:26:38 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DisplayType.hpp"

bool	isOutOfRangeInt(std::string const &str)
{
	long long	l = std::strtol(str.c_str(), NULL, 10);
	if (l < INT_MIN || l > INT_MAX)
	{
		std::cout << "int Out of range !" << std::endl;
		return false;
	}
	return true;
}

bool	isOutOfRangeDouble(std::string const &str)
{
	long double	l = std::strtod(str.c_str(), NULL);
	if (l < LLONG_MIN || l > LLONG_MAX)
	{
		std::cout << "double Out of range !" << std::endl;
		return false;
	}
	return true;
}

bool	is_int(std::string const &str)
{
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < len)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			i++;
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	if (!isOutOfRangeInt(str))
		return false;
	return (true);
}

bool	is_float(std::string const &str)
{
	float	flo = 0;
	size_t	i = 0;
	size_t	len = str.length();

	if (str[len] != 'f')
		return false;

	len--;
	while (str[i] != '.')
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			i++;
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	i++;
	while (i < len)
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	if (!isOutOfRangeDouble(str))
		return false;
	if ((flo = std::atof(str.c_str())) == 0)
		return false;
	std::cout << flo << std::endl;
	return true;
}

bool	is_double(std::string const &str)
{
	double	dou = 0;
	size_t	i = 0;
	size_t	len = str.length();

	while (str[i] != '.')
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			i++;
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	i++;
	while (i < len)
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	if (!isOutOfRangeDouble(str))
		return false;
	if ((dou = std::strtod(str.c_str(), NULL)) == 0)
		return false;
	std::cout << dou << std::endl;
	return true;
}


bool	is_char(std::string const &str)
{
	int len = str.length();
	if (len == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (true);
	return (false);
}

void	detectType(std::string const &str)
{
	if (is_char(str))
		std::cout << "Congratulation it's a *CHAR* !" << std::endl;
	if (is_int(str))
		std::cout << "Congratulation it's an *INT* !" << std::endl;
	if (is_float(str))
		std::cout << "Congratulation it's a *FLOAT* !" << std::endl;
	if (is_double(str))
		std::cout << "Congratulation it's a *DOUBLE* !" << std::endl;
	else
		std::cout << "Wrong argument FDP !" << std::endl;
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		detectType(av[1]);
		return (0);
	}

	std::cout << "Met des arguments ta race" << std::endl;
	return (1);
}


// bool	is_double(std::string const &str)
// {
// 	size_t	i = 0;
// 	size_t	len = str.length();

// 	if (!(str.compare("-inf")) || !(str.compare("+inf")) || !(str.compare("nan")))
// 		return (true);

// 	size_t	p_pos = str.find('.');
// 	size_t	p_rpos = str.rfind('.');
// 	if (p_pos != p_rpos)
// 		return (false);
// 	if (p_pos == len)
// 		return (false);

// 	size_t	f_position = str.find('f');
// 	size_t	f_position_check = str.rfind('f');
// 	if (f_position != f_position_check)
// 		return (false);
// 	if (f_position != std::string::npos && f_position != len - 1)
// 		return (false);

// 	size_t	m_pos = str.find("-");
// 	if (m_pos != 0 && str[0] == '-')
// 		return (false);

// 	while (i < len - 1)
// 	{
// 		if (!isprint(str[i]))
// 			return (false);
// 		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
// 			return (false);
// 		i++;
// 	}
// 	if (!isdigit(str[i]) && !(str[i] == 'f'))
// 		return (false);
// 	return (true);
// }

// void	get_type(std::string const &str)
// {
// 	Conversion	conv(str);

// 	if (is_char(str))
// 		conv.char_conv();
// 	else if (is_int(str))
// 		conv.int_conv();
// 	else if (is_float(str))
// 		conv.float_conv();
// 	else if (is_double(str))
// 		conv.double_conv();
// 	else
// 		std::cerr << "Invalid argument" << std::endl;
// 	return ;
// }