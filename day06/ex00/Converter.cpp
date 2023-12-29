#include "Converter.hpp"
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <string>

Converter::Converter(const char* arg) : _value(std::stod(arg)), _isNan(0), _isInf(0), _isNegInf(0)
{
	std::string	tmp(arg);

	if (!tmp.compare("nan"))
		this->_isNan = true;
	if (!tmp.compare("-inf"))
		this->_isNegInf = true;
	if (!tmp.compare("+inf") || !tmp.compare("inf"))
		this->_isInf = true;
	if ((this->_value - static_cast<int>(this->_value) == 0.000))
		this->_isZeroEnd = true;
}

Converter::Converter(const Converter &rhs)
{
	*this = rhs;
}

Converter	&Converter::operator=(const Converter &rhs)
{
	this->_value = rhs._value;

	return *this;
}

Converter::~Converter()
{

}

void	Converter::convertFloat() const
{
	std::cout << "float: ";
	if (this->_isInf)
		std::cout <<  "+inff";
	else if (this->_isNan)
		std::cout << "nan";
	else if (this->_isNegInf)
		std::cout << "-inff";
	else
		std::cout << this->_value;
	if (this->_isZeroEnd)
		std::cout << ".0";
	std::cout << "f" << "\n";
}

void	Converter::convertDouble() const
{
	std::cout << "double: ";
	if (this->_isInf)
		std::cout <<  "+inf";
	else if (this->_isNan)
		std::cout << "nan";
	else if (this->_isNegInf)
		std::cout << "-inf";
	else
		std::cout << this->_value;
	if (this->_isZeroEnd)
		std::cout << ".0";
	std::cout << "\n";
}

void	Converter::convertInt() const
{
	std::cout << "int: ";
	if (this->_value < INT_MIN || this->_value > INT_MAX
			|| this->_isInf || this->_isNan
			|| this->_isNegInf)
		std::cout <<  "impossible";
	else
		std::cout << this->_value;
	std::cout << "\n";
}

void	Converter::convertChar() const
{
	std::cout << "char: ";
	char c = static_cast<char>(this->_value);
	if (this->_value < 0 || this->_value > 255
			|| this->_isInf || this->_isNan
			|| this->_isNegInf)
		std::cout << "impossible";
	else if (!isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << c;
	std::cout << "\n";
}
void	Converter::convert() const
{
	this->convertChar();
	this->convertInt();
	this->convertFloat();
	this->convertDouble();
}
