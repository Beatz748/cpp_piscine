#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>

class Converter
{
private:
	long double	_value;
	bool		_isNan;
	bool		_isInf;
	bool		_isNegInf;
	bool		_isZeroEnd;
public:
		/* COPLIEN */
	Converter(const char *arg);
	Converter(const Converter &rhs);
	~Converter();
	Converter &operator=(const Converter &rhs);
		/* Implementation */
	void	convertFloat() const;
	void	convertDouble() const;
	void	convertInt() const;
	void	convertChar() const;
	void	convert() const;
		/* Getters */

		/* Setters */

		/* Exceptions */
	
};


#endif
