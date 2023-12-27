#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form
{
private:
	const std::string	_target;
	ShrubberyCreationForm();
		
public:
		/* COPLIEN */
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		/* Implementation */
	void	execute(const Bureaucrat & executor) const;
		/* Exceptions */
	
};

#endif
