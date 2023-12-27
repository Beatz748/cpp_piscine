#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &rhs)
{
	(void)rhs;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

	/* Implementation */
Form	*Intern::makePardon(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeShurbbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}
Form	*Intern::makeRobot(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(const std::string &formName, const std::string &targetName)
{
	const std::string	forms[3] =
	{
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	Form* (Intern::*formCreate[3])(const std::string &target) =
	{
		&Intern::makeRobot,
		&Intern::makePardon,
		&Intern::makeShurbbery
	};
	for (int i = 0; i < 3; ++i)
	{
		if (formName == forms[i])
			return (this->*formCreate[i])(targetName);
	}
	throw WrongFormName();
}

const char *Intern::WrongFormName::what() const _NOEXCEPT
{
	return "[Intern] bad form name";
}
