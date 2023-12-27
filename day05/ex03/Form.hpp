#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_signGrade;
		const int		_execGrade;
	public:
		/* COPLIEN */
		Form();
		Form(const std::string &name, int signGrade, int execGrade);
		Form(const Form &rhs);
		~Form();
		Form &operator=(const Form &rhs);

		const std::string	&getName() const;
		int			getExecGrade() const;
		int			getSignGrade() const;
		bool			getStatus() const;
		void			beSigned(const Bureaucrat &bur);
		virtual void		execute(const Bureaucrat & executor) const;

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		
		class NotSignedException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
