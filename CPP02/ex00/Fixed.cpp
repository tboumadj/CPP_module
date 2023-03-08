#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "*Constructor of Fixed called!*" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed&)
{
	std::cout << "*Recopy constructor of fixed called!*" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "*Destructor of Fixed called!*" << std::endl;
	return ;
}


