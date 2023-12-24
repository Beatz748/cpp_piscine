#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
private:
	const std::string	_target;
	PresidentialPardonForm();
		
public:
		/* COPLIEN */
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		/* Implementation */
	void	execute(const Bureaucrat & executor) const override;
		/* Exceptions */
	
};

#endif
