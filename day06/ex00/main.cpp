#include <exception>
#include <string>
#include <iostream>
#include "Converter.hpp"

int	main(int argc, char **argv)
{

	(void)argv;

	if (argc < 2)
	{
		std::cout << "Put something" << std::endl;
		return 1;
	}
	Converter	convert(argv[1]);
	convert.convert();
}
