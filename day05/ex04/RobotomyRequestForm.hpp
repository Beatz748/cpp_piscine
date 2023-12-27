#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
private:
	const std::string	_target;
	RobotomyRequestForm();
		
public:
		/* COPLIEN */
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		/* Implementation */
	void	execute(const Bureaucrat & executor) const;
		/* Exceptions */
	
};

#endif
