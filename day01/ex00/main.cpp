#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony(10, 20, "Heaply");

	std::cout << pony << " On heap!" << std::endl;

	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony = Pony(50, 100, "Stacky");

	std::cout << &pony << " On stack!" << std::endl;
}

int	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
