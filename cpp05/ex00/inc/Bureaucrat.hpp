/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:36:25 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:46:56 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const & save);
		virtual ~Bureaucrat(void);

		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;

		Bureaucrat			&operator=(Bureaucrat const & rhs);

		void				increaseGrade(void);
		void				decreaseGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31mGrade is too high !\033[0m");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31mGrade is too low !\033[0m");
				}
		};

	private:
		std::string const	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif