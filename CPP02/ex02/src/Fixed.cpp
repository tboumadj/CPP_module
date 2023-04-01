/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:57 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/04/01 09:48:21 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _num(0) 
{
  //std::cout << "*Constructor of Fixed called!*" << std::endl;
  return ;
}

Fixed::Fixed(const Fixed &co) 
{
  //std::cout << "*Recopy constructor of fixed called!*" << std::endl;
  *this = co;
  return ;
}

Fixed::Fixed(const int ni)
{
  //std::cout << "*Constructor int of Fixed called!*" << std::endl;
  this->_num = ni << this->_rawbits;
  return ;
}

Fixed::Fixed(const float f)
{
  //std::cout << "*constructor float of Fixed called!*" << std::endl;
  this->_num = roundf(f * (1 << this->_rawbits));
  return ;
}

Fixed &Fixed::operator=(const Fixed &n) 
{
  //std::cout << "*Assignement operator called!*" << std::endl;
  this->_num = n.getRawBits();
  return (*this);
}

Fixed::~Fixed(void) 
{
  //std::cout << "*Destructor of Fixed called!*" << std::endl;
  return;
}

std::ostream &operator<<(std::ostream &os, const Fixed &nbr)
{
  //std::cout << "Surcharge operator(<<) called!" << std::endl;
  os << nbr.toFloat();
  return (os);
}

int Fixed::getRawBits(void) const 
{
  //std::cout << "*getRawbits member function called!*" << std::endl;
  return (this->_num);
}

void Fixed::setRawBits(int const raw) 
{
  this->_num = raw;
  return;
}

float Fixed::toFloat(void) const
{
  return((float)this->_num / (float)(1 << this->_rawbits));
}

int Fixed::toInt(void) const
{
  return (this->_num >> this->_rawbits);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
  if (num1 <= num2)
    return (num1);
  else
    return (num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
  if ( num1 <= num2)
    return (num1);
  else
    return (num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
  if (num1 >= num2)
    return (num1);
  else
    return (num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
  if (num1 >= num2)
    return (num1);
  else
    return (num2);
}

//Surcharge Operator------------------------
//Incrementation
Fixed &Fixed::operator++()
{
  this->_num++;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp = *this;
  ++(*this);
  return (tmp);
}

//Desincrementation
Fixed &Fixed::operator--()
{
  this->_num--;
  return (*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp = *this;
  --(*this);
  return (tmp);
}
//Aritmetic---------------------------------

Fixed Fixed::operator+(const Fixed &x)
{
  Fixed tmp(this->toFloat() + x.toFloat());
  return (tmp);
}

Fixed Fixed::operator-(const Fixed &x)
{
  Fixed tmp(this->toFloat() + x.toFloat());
  return (tmp);
}

Fixed Fixed::operator*(const Fixed &x)
{
  Fixed tmp(this->toFloat() * x.toFloat());
  return (tmp);
}

Fixed Fixed::operator/(const Fixed &x)
{
  Fixed tmp(this->toFloat() / x.toFloat());
  return tmp;
}

//Comparison-------------------------------

bool Fixed::operator>(const Fixed &x) const
{
  return (this->getRawBits() > x.getRawBits());
}

bool Fixed::operator<(const Fixed &x) const
{
  return (this->getRawBits() < x.getRawBits());
}


bool Fixed::operator>=(const Fixed &x) const
{
  return (this->getRawBits() >= x.getRawBits());
}

bool Fixed::operator<=(const Fixed &x) const
{
  return (this->getRawBits() <= x.getRawBits());
}

bool Fixed::operator==(const Fixed &x) const
{
  return (this->getRawBits() == x.getRawBits());
}


bool Fixed::operator!=(const Fixed &x) const
{
  return (this->getRawBits() != x.getRawBits());
}
