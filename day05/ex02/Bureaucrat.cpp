#include "Bureaucrat.hpp"
#include <exception>

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name), _grade(rhs._grade)
{
	
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const std::string	&Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incGrade()
{
	int	grade = this->getGrade();
	if (grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decGrade()
{
	int	grade = this->getGrade();
	if (grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void			Bureaucrat::signForm(Form &form) const
{
	try
	{
		std::cout << this->getName() << " bureaurat signs form "
			<< form.getName() << " ... ";
		form.beSigned(*this);
		std::cout << "it is signed! \n";
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " cannot sign form "
			<< form.getName() << " because"
			<< e.what() << "\n";
	}
}

void			Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << "error while executing" << e.what() << "\n";
	}
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade()
		<< std::endl;
	return out;
}

const char	*Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade too low!");
}
