#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat	bur1("Iosif", 1);
	Bureaucrat	bur2("Stepan", 150);
	try
	{	
		ShrubberyCreationForm	shrub("Vinx");
		PresidentialPardonForm	president("Carl");
		RobotomyRequestForm	robot("Merc");

		bur1.signForm(president);
		bur1.executeForm(president);
		bur1.signForm(robot);
		bur1.signForm(shrub);
		bur1.executeForm(president);
		bur1.executeForm(robot);
		bur1.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
