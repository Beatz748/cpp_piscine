#include "Fixed.class.hpp"

Fixed::Fixed() : _num(0)
{
	std::cout << "Default constructor for Fixed called!" << std::endl;
}

Fixed::Fixed(int const num) : _num(num << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _num(roundf(num * (1 << _fracBits)))
{
	    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor for Fixed called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy constructor for Fixed called!" << std::endl;
	*this = rhs;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_num = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits function called" << std::endl;
	return _num;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	_num = raw;
}
