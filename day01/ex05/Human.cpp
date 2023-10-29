#include "Human.hpp"


Human::Human()
{
	std::cout << "Human constructor" << std::endl;
}
Human::~Human()
{
	std::cout << "Human constructor" << std::endl;
}
std::string	Human::identify() const
{
	return _brain.identify();
}
const	Brain	&Human::getBrain() const
{
	return _brain;
}
