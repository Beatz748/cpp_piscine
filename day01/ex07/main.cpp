#include "Replacer.hpp"

int	main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Wrong num of arguments" << std::endl;
		return 1;
	}
	std::string	inputFile(argv[1]);
	std::string	from(argv[2]);
	std::string	to(argv[3]);

	Replacer	replacer(inputFile, from, to);
	replacer.replace();
}
