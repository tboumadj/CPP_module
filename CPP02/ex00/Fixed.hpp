#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class	Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed &n);
	Fixed & operator = (const Fixed &n);
	~Fixed(void);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int	_num;
	int const static _numstat = 8;

};

#endif
