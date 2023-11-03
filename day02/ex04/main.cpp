#include <iostream>
#include "Fixed.class.hpp"
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return 1;
	}
	std::string	expr = argv[1];
}
