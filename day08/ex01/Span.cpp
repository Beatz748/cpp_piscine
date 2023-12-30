#include "Span.hpp"
#include <stdexcept>
	/* COPLIEN */
Span::Span(unsigned int N) : _values(new int[N]), _N(N), _size(0)
{

}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span::~Span()
{
	delete[] this->_values;
}

Span &Span::operator=(const Span &rhs)
{
	this->_N = rhs._N;
	this->_values = new int[this->_N];
	this->_size = rhs._size;
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_values[i] = rhs._values[i];

	return *this;
}

	/* Implementation */
void	Span::addNumber(int n)
{
	if (this->_size >= this->_N)
		throw std::out_of_range("size >= _N");
	this->_values[this->_size++] = n;
}

int	Span::shortestSpan() const
{
	if (this->_size < 2)
		throw Span::SpanNotFound();
	int	res = std::abs(this->_values[0] - this->_values[1]);
	int	tmp = res;
	for (unsigned int i = 0; i < this->_size; ++i)
		for (unsigned int j = i + 1; j < this->_size; ++j)
		{
			tmp = std::abs(this->_values[i] - this->_values[j]);
			res =  tmp < res ? tmp : res;
		}
	return res;
}

int	Span::longestSpan() const
{
	if (this->_size < 2)
		throw Span::SpanNotFound();
	int	res = std::abs(this->_values[0] - this->_values[1]);
	int	tmp = res;
	for (unsigned int i = 0; i < this->_size; ++i)
		for (unsigned int j = i + 1; j < this->_size; ++j)
		{
			tmp = std::abs(this->_values[i] - this->_values[j]);
			res =  tmp > res ? tmp : res;
		}
	return res;

}

	/* Getters */

	/* Setters */

	/* Exceptions */

const char *Span::SpanNotFound::what() const _NOEXCEPT
{
	return "Span not found!";
}
