#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	Form	*makePardon(const std::string &target);	
	Form	*makeShurbbery(const std::string &target);
	Form	*makeRobot(const std::string &target);
public:
		/* COPLIEN */
	Intern();
	Intern(const Intern &rhs);
	~Intern();
	Intern &operator=(const Intern &rhs);
		/* Implementation */
	Form	*makeForm(const std::string &formName, const std::string &targetName);
		/* Exceptions */
	class WrongFormName : public Form
	{
		public:
			const char *what() const _NOEXCEPT;
	};
	
};

#endif
