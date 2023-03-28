/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:33 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/28 09:11:36 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

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

