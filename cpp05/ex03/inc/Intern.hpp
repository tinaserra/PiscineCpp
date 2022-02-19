/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:06:37 by vserra            #+#    #+#             */
/*   Updated: 2022/02/19 15:31:56 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & save);
		virtual	~Intern(void);

		Intern	&operator=(Intern const & rhs);

		AForm	*makeForm(std::string name, std::string target);

		class	WrongFormNameException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31m[Intern] Incorrect name of form !\033[0m");
				}
		};

	private:
		std::string	_formName[3];
		AForm		*_makeShrubberyCreation(std::string);
		AForm		*_makeRobotomyRequest(std::string);
		AForm		*_makePresidentialPardon(std::string);
};

#endif
