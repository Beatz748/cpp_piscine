#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	try
	{
      		Bureaucrat	bur1("Iosif", 1);
      		Bureaucrat	bur2("Stepan", 150);
      		Intern		intern;
      		OfficeBlock	ob(intern, bur1, bur1);
      		ob.doBureaucracy("shrubbery creation", "Bumblebee");
      		ob.doBureaucracy("presidential pardon", "Bumblebee");
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
