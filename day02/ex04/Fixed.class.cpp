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
	return _num;
}

void	Fixed::setRawBits(int const raw)
{
	_num = raw;
}

int	Fixed::toInt() const
{
	return (_num >> _fracBits);
}

float	Fixed::toFloat() const
{
	return static_cast<float>(_num) / (1 << _fracBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return out;
}

Fixed	&Fixed::operator++(void)
{
	++_num;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = Fixed(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--(void)
{
	--_num;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = Fixed(*this);
	operator--();
	return tmp;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

const Fixed	&Fixed::min(const Fixed &l, const Fixed &r)
{
	return (l < r ? l : r);
}

const Fixed	&Fixed::max(const Fixed &l, const Fixed &r)
{
	return (l > r ? l : r);
}

int	Fixed::evaluateExpression(const std::string &expression) const
{
	int	result = 0;
	
	return result;
}
