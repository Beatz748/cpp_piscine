#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	bur1("Iosif", 1);
	Bureaucrat	bur2("Stepan", 150);
	Form		f1("BigMac", 5, 5);
	try
	{	
		Form	f2("school", 1, 150);
		bur1.signForm(f1);
		bur2.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bur1 << bur2 << f1;
}
