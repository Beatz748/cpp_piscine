#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>	zero;
	Array<int>	sev(5);
	Array<int>	copy(sev);
	for (unsigned int i = 0; i < sev.size(); ++i)
	{
		std::cout << sev[i] << '\n';
	}
	std::cout << "--------------------------\n";
	for (unsigned int i = 0; i < copy.size(); ++i)
	{
		copy[i] = i;
		std::cout << sev[i] << " -> " << copy[i] << '\n';
	}
	try
	{
		zero[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"-------------------\n";
	zero = copy;
	for (unsigned int i = 0; i < zero.size(); ++i)
	{
		zero[i] = i;
		std::cout << zero[i] << '\n';
	}
}
