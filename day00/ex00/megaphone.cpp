#include <iostream>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (size_t i = 0; i < argc; ++i)
		for (size_t j = 0; argv[i][j]; ++j)
			std::cout << (unsigned char)std::toupper(argv[i][j]);
}
