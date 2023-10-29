#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*pstr = &str;
	std::string	&astr = str;
	std::cout << "This is str: " << str << " " << &str << std::endl;
	std::cout << "This is str from pointer: " << *pstr << " " << pstr << " Address of pointer: " << &pstr << std::endl;
	std::cout << "This is str from address: " << astr << " " << &astr << std::endl;
	if (astr == str)
		std::cout << "astr == str" << std::endl;
	if (&astr == &str)
		std::cout << "&astr == &str" << std::endl;
}
