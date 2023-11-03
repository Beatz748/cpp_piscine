#ifndef	FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class	Fixed
{
	private:
		static const int	_fracBits = 8;
		int			_num;
	public:
		int	evaluateExpression(const std::string &expression) const;
		Fixed();
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const &rhs);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;
		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		int	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int	toInt() const;
		static const Fixed	&max(Fixed const &l, Fixed const &r);
		static const Fixed	&min(Fixed const &l, Fixed const &r);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &in);

#endif
