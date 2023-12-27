#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_signingBur;
	Bureaucrat *_executingBur;

	OfficeBlock &operator=(const OfficeBlock &rhs);
	OfficeBlock(const OfficeBlock &rhs);
public:
		/* COPLIEN */
	OfficeBlock();
	OfficeBlock(Intern &intern, Bureaucrat &signingBur, Bureaucrat &executingBur);
	~OfficeBlock();
		/* Implementation */
	void	doBureaucracy(const std::string &formName, const std::string &target);
	void	setIntern(Intern &intern);
	void	setSigningBur(Bureaucrat &bur);
	void	setExecutingBur(Bureaucrat &bur);
		/* Exceptions */
};

#endif


