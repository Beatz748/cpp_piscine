#include <fstream>
#include <iostream>

int	main()
{
	std::ofstream	out;
	out.open("ex");
	out << "H" << std::endl;
}
