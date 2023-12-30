#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
		
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
		/* COPLIEN */
	MutantStack() : std::stack<T>()
	{
		
	};

	MutantStack(const MutantStack &rhs)
	{
		*this = rhs;
	};
	
	~MutantStack()
	{

	};

	MutantStack &operator=(const MutantStack &rhs)
	{
		this->c = rhs.c;

		return *this;
	}
		/* Implementation */
	iterator	begin()
	{
		return (this->c.begin());
	};

	iterator	end()
	{
		return (this->c.end());
	}

		/* Getters */

		/* Setters */

		/* Exceptions */
	
};

#endif
