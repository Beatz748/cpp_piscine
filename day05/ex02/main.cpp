#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat	bur1("Iosif", 1);
	Bureaucrat	bur2("Stepan", 150);
	Form		f1("BigMac", 5, 5);
	try
	{	
		Form	f2("school", 1, 150);
		ShrubberyCreationForm	shrub("Vinx");
		PresidentialPardonForm	president("Carl");
		RobotomyRequestForm	robot("Merc");

		bur1.signForm(president);
		bur1.signForm(robot);
		bur1.signForm(shrub);
		robot.execute(bur1);
		president.execute(bur1);
		shrub.execute(bur1);
		bur1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bur1 << bur2 << f1;
}
