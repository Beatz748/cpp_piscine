#include "easyfind.hpp"
#include <exception>
#include <vector>

int	main()
{
	std::vector<int>	vec(5, 0);
	for (int i = 0; i < 5; ++i)
		vec[i] = i;
	try
	{
		std::vector<int>::const_iterator it = easyfind(vec, 4);
		if (it != vec.end())
			std::cout << "Num: " << *it << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}
