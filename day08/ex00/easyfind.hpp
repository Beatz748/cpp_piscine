#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(T &con, int n)
{
	typename T::const_iterator it;

	it = std::find(con.begin(), con.end(), n);
	if (it != con.end())
	{
		std::cout << "Value " << *it << " exists\n";
		return it;
	}
	throw std::out_of_range("No value\n");
}

#endif
