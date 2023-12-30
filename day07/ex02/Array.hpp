#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T		*_values;
	unsigned int	_size;
public:
		/* COPLIEN */
	Array()
	{
		this->_values = new T[0];
		this->_size = 0;
	};

	Array(unsigned int n)
	{
		this->_values = new T[n];
		this->_size = n;
	};

	Array(const Array &rhs)
	{
		*this = rhs;
	};

	~Array()
	{
		if (this->_values)
			delete[] this->_values;
	};

	Array &operator=(const Array &rhs)
	{
		this->_size = rhs.size();
		this->_values = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i)
			this->_values[i] = rhs._values[i];

		return *this;
	}

	T	&operator[](int n) const
	{
		if ((unsigned int)n >= this->_size || n < 0)
			throw std::out_of_range("Out of range");
		return (this->_values[n]);
	}
		/* Implementation */

		/* Getters */
		unsigned int	size() const
		{
			return this->_size;
		};
		/* Setters */

		/* Exceptions */
	
};

#endif
