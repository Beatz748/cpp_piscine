#include <_types/_uint16_t.h>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	line;
	if (argc == 1)
		while (std::getline(std::cin, line))
			std::cout << line << std::endl;
	else
		for (uint16_t i = 1; i < argc; ++i)
		{
			std::ifstream	file(argv[i]);
			if (file.is_open() && file.good())
				while (std::getline(file, line))
					std::cout << line << std::endl;
			else
				std::cout << "cato9tails: " << argv[i] << ": No such file or directory";
			file.close();
		}
}
