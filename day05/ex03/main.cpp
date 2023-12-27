#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	bur1("Iosif", 1);
	Bureaucrat	bur2("Stepan", 150);
	try
	{
		Intern	intern;

		Form	*rbt = intern.makeForm("robotomy request", "Kevin");
		Form	*shrb = intern.makeForm("shrubbery creation", "Vinx");
		Form	*prsdnt = intern.makeForm("presidential pardon", "Pimp");
		bur1.signForm(*rbt);
		bur1.signForm(*shrb);
		bur1.signForm(*prsdnt);
		bur1.executeForm(*rbt);
		bur1.executeForm(*shrb);
		bur1.executeForm(*prsdnt);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
