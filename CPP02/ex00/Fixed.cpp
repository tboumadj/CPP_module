#include "Fixed.hpp"

Fixed::Fixed(void): _num(0)
{
	std::cout << "*Constructor of Fixed called!*" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "*Recopy constructor of fixed called!*" << std::endl;
	*this = n;
	return ;
}

Fixed & Fixed::operator=(const Fixed &n)
{
	std::cout << "*Assignement operator called!*" << std::endl;
	this->_num = n.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "*Destructor of Fixed called!*" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "*getRawbits member function called!*" << std::endl;
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
	return ;
}

