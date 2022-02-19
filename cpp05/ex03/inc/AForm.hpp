/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:55:36 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:33:10 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	public:
		AForm(void);
		AForm(std::string const name, int signGrade, int execGrade, std::string target);
		AForm(AForm const & save);
		virtual ~AForm(void);

		std::string const	getName(void) const;
		bool				getSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		std::string const	getTarget(void) const;

		AForm				&operator=(AForm const & rhs);

		void				beSigned(Bureaucrat const & b);
		virtual bool		execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31m[AForm] Grade is too high !\033[0m");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31m[AForm] Grade is too low !\033[0m");
				}
		};

		class	UnsignedFormException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31m[AForm] not signed !\033[0m");
				}
		};

	protected:
		bool				_statut;
		std::string const	_name;
		int const			_signGrade;
		int const			_execGrade;
		std::string			_target;
};

std::ostream	&operator<<(std::ostream & o, AForm const & rhs);

#endif
