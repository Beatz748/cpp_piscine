#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const	std::string	_name;
		int			_grade;
	public:
		/* COPLIEN */
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &rhs);

		void			signForm(Form &form) const;
		void			executeForm(const Form &form) const;

		int			getGrade() const;
		const std::string	&getName() const;
		void			incGrade();
		void			decGrade();

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT override;
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT override;
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
