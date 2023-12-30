#include <climits>
#include <iostream>
#include <string>

struct Data
{
	std::string	s1;
	int		num;
	std::string	s2;
};

Data	*deserialize(void *raw)
{
	Data	*data = reinterpret_cast<Data*>(raw);
	return (data);
}

void	*serialize(void)
{
	Data	*ret = new Data;


	ret->s1 = std::string(8, ' ');
	ret->s2 = std::string(8, ' ');

	for (int i = 0; i < 8; ++i)
	{
		(ret->s1)[i] = rand() % 26 + 'a';
		(ret->s2)[i] = rand() % 26 + 'a';
	}
	ret->num = rand() % INT_MAX;
	std::cout << ret->s1 << "\n" << ret->num << "\n" << ret->s2 << "\n";

	return ret;
}

int	main()
{
	srand(time(0));
	void	*ptr = serialize();
	Data	*res = deserialize(ptr);
	std::cout << "-------------------------" << std::endl;
	std::cout << res->s1 << std::endl << res->num << std::endl
			  << res->s2 << std::endl;
	delete res;

	return (0);
}
