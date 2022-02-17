/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:55:36 by vserra            #+#    #+#             */
/*   Updated: 2022/02/17 20:35:08 by vserra           ###   ########.fr       */
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
		Form(std::string const name, unsigned int signGrade, unsigned int execGrade);
		Form(Form const & save);
		virtual ~Form(void);

		std::string const	getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;

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
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		
		
};

std::ostream	&operator<<(std::ostream & o, Form const & rhs);

#endif
