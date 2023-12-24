#include "Form.hpp"

Form::Form() : _name("Unknown"), _signed(false), _signGrade(150), _execGrade(150)
{

}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name),
	_signGrade(signGrade), _execGrade(execGrade)
{

}

Form::Form(const Form &rhs) : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade)
{

}

Form::~Form()
{

}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getStatus();
	return *this;
}


const std::string	&Form::getName() const
{
	return this->_name;
}

int		Form::getExecGrade() const
{
	return this->_execGrade;
}

int		Form::getSignGrade() const
{
	return this->_signGrade;
}

bool		Form::getStatus() const
{
	return this->_signed;
}

void			Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

void			Form::execute(const Bureaucrat &executor) const
{
	std::cout << "Form executed by " << executor.getName()
		<< "\n";
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	const std::string	formName = form.getName();
	bool	status = form.getStatus();
	if (status)
		out << formName << " form is signed. ";
	else
		out << formName << " form is not signed. ";
	out << "Required grade to be signed is: " << form.getSignGrade();
	return out;
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return "Grade too high for sign [Form]";
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
	return "Grade too low for sign [Form]";
}
const char *Form::NotSignedException::what() const _NOEXCEPT
{
	return "[Form] Form is not signed!";
}
