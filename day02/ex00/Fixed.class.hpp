#ifndef	FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class	Fixed
{
	private:
		static const int	_fracBits = 8;
		int			_num;
	public:
		Fixed();
		Fixed(Fixed const &rhs);
		~Fixed();
		Fixed &operator=(Fixed const &rhs);

		int	getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
