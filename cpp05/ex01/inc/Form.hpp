/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:55:36 by vserra            #+#    #+#             */
/*   Updated: 2022/02/18 13:41:05 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(std::string const name, int signGrade, int execGrade);
		Form(Form const & save);
		virtual ~Form(void);

		std::string const	getName(void) const;
		bool				getSigned(void) const;
		int		getSignGrade(void) const;
		int		getExecGrade(void) const;

		Form				&operator=(Form const & rhs);

		void				beSigned(Bureaucrat const & b);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Form] Grade is too high !");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Form] Grade is too low !");
				}
		};

	private:
		bool				_statut;
		std::string const	_name;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream	&operator<<(std::ostream & o, Form const & rhs);

#endif
