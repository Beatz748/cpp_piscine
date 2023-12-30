#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>

class Span
{
private:
	int		*_values;
	unsigned int	_N;
	unsigned int	_size;
	Span();
public:
		/* COPLIEN */
	Span(unsigned int N);
	Span(const Span &rhs);
	~Span();
	Span &operator=(const Span &rhs);
		/* Implementation */
	void	addNumber(int n);
	int	shortestSpan() const;
	int	longestSpan() const;
		/* Getters */

		/* Setters */

		/* Exceptions */
	class SpanNotFound : public std::exception
	{
		public:
			const char *what() const _NOEXCEPT;
	};
};

#endif
