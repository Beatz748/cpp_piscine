#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : Form(rhs), _target(rhs._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

	/* Implementation */
void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (!this->getStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	srand(time(0));
	bool	random = rand() % 2;

	if (random)
		std::cout << this->_target << " has been robotomized successfully\n";
	else
		std::cout << this->_target << " failed to robotomized\n";
}

	/* Exceptions */


