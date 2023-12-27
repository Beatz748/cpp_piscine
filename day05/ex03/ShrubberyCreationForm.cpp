#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(rhs), _target(rhs._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

	/* Implementation */
void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!this->getStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::ofstream file(this->_target + "_shrubbery");
file << R"(
                                !
                               / \
                              / @ \
                             /!$%^#\
                            /^&*(")$\
                           /%$^&""^(&\
                          /!@%^&*^&|@*\
                         /^$$^*%@^%^&^$\
                        /!%^$&^@$&^@^&%*\
                       /^&%@^&^$%@^*(")$&\
                      /!^%@^&%@&*^$%^&^*$^\
                     /^%&*^$%^*^$%&^&^@%^&*\
                    /!&%@^$%&*^$%^&^@^(%&^$^\
                   /^%@^&*^$%^@^$&*^$%^&^%^&^\
                  /$^*%@^&^@%$^&^%^&^$%^&%@^&%\
                 /!%^&*^$%%^&^%&^^&^%&*^%@^&*^$\
                /^$%^&^^%@^&^$%@%@^&^$%&*^$%^&^$\
               /!%@^&%@^&*^%@^%@^&^$%@^$%^&*^%@^&\
              /^$%@^&^%@^$%^&*^$%^&^%^%@^&^$%@@^&*\
             /!^%@^&*^$%^&^%@^&^$%^&^%^%@^&^$%@@^&^\
            /^%&*^$%^&^$^@^%@^&^%@^&^^%@^&^$%@%@^&*^\
           /!&%@^&^$^@^%@^&*^%@^&^$^^%@^&^$%@%@^&^%@^\
          /^%@^&*^%@^&^$%^&^%@^&^%@^^%@^&^$%@&^%@^&^$^\
         /$^*%@^&@%@^&*^%@^&^%%@^&^%@^&@^&^%@^&$^%@^&*^\
        /!%&^$%^&*^%@^&^$%^&^%@^&^%@%^&^%@^&^%$@%%^&*^$%\
       /^%@^&^$%^&^%@^&^%@^&^%@^&^%@^&@*^%@^&@$^$%@^&^%@^\
      /$%^&^%@^&^%@^&^%@^&*^%@^&^%@^&^^%^%@^&^%@^&*^%@^&*^\
     /!%@^&*^%@^&^%@^&^%@^&*^%@^&^%@^&*^%@^&%@%@^&^%@^&*^%@\
    /!&^$%^&^%@^&^%@^&^%@^&*^%@^&^%@^&*^%@^&#$%*(^^%@^&*^%@^\
   /@%^&*^%@^&^%@^&^%@^&^%@^&*^%@^&^%@^&*^%@^&^%@^$#($#)&^%@^\
  /$^%@^&*^%@^&^%@^&^%@^&*^%@^&^%@^&^%@^&*^%@^&^%@^&*()&*^%@^&\
 /!%@^&*^%@^&^%@^&^%@^&^%@$^&*^%@^&^%@^&*^%@^&^%@^&*^%[]@^&^%@^\
!@%^&*^%@^&^%@^&^%@^&^%@^[]&*^%@^&^%@%^&*^%@^&^%@^&*^%@^&^%@^&*^\
)" << std::endl;

}

	/* Exceptions */


