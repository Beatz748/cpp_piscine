#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 72, 45), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : Form(rhs), _target(rhs._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

	/* Implementation */
void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!this->getStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
}

	/* Exceptions */


