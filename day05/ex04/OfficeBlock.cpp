#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{

}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signingBur, Bureaucrat &executingBur) : _intern(&intern),
	_signingBur(&signingBur), _executingBur(&executingBur)
{
	
}

OfficeBlock::~OfficeBlock()
{

}

	/* Implementation */
void	OfficeBlock::doBureaucracy(const std::string &formName, const std::string &target)
{
	try
	{
		Form *form = _intern->makeForm(formName, target);
		_signingBur->signForm(*form);
		_executingBur->executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}

void	OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void	OfficeBlock::setSigningBur(Bureaucrat &bur)
{
	_signingBur = &bur;
}

void	OfficeBlock::setExecutingBur(Bureaucrat &bur)
{
	_executingBur = &bur;
}


