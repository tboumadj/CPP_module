/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:57 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/31 19:12:13 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _num(0) 
{
  std::cout << "*Constructor of Fixed called!*" << std::endl;
  return ;
}

Fixed::Fixed(const Fixed &co) 
{
  std::cout << "*Recopy constructor of fixed called!*" << std::endl;
  *this = co;
  return ;
}

Fixed::Fixed(const int ni)
{
  std::cout << "*Constructor int of Fixed called!*" << std::endl;
  this->_num = ni << this->_numint;
  return ;
}

Fixed::Fixed(const float f)
{
  std::cout << "*constructor float of Fixed called!*" << std::endl;
  this->_num = roundf(f * (1 << this->_numint));
  return ;
}

Fixed &Fixed::operator=(const Fixed &n) 
{
  std::cout << "*Assignement operator called!*" << std::endl;
  this->_num = n.getRawBits();
  return (*this);
}

Fixed::~Fixed(void) 
{
  std::cout << "*Destructor of Fixed called!*" << std::endl;
  return;
}

std::ostream &operator<<(std::ostream &os, const Fixed &nbr)
{
  return (os << nbr.toFloat());
}

int Fixed::getRawBits(void) const 
{
  std::cout << "*getRawbits member function called!*" << std::endl;
  return (this->_num);
}

void Fixed::setRawBits(int const raw) 
{
  this->_num = raw;
  return;
}

float Fixed::toFloat(void) const
{
  return((float)this->_num / (float)(1 << this->_numint));
}

int Fixed::toInt(void) const
{
  return (this->_num >> this->_numint);
}

