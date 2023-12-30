#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, int length, void (*call)(T &elem))
{
	for (int i = 0; i < length; ++i)
		call(array[i]);
}

template <typename T>
void	plus(T &elem)
{
	elem = elem + 1;
}

int	main()
{
//	char	tmp[8] = "abcdefg";
	int	*tmp = new int[8];
	for (int i = 0; i < 8; ++i)
		tmp[i] = i;
	
	for (int i = 0; i < 8; ++i)
		std::cout << tmp[i] << " ";
	std::cout << "\n";
	::iter(tmp, 8, plus);
	for (int i = 0; i < 8; ++i)
		std::cout << tmp[i] << " ";
	std::cout << "\n";
}
