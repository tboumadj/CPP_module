/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:38:12 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/30 17:42:04 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Literal.hpp"

Literal::Literal()
{
  std::cout << "*Default constructor called!*" << std::endl;
  return ;
}

Literal::Literal(const std::string str): _data(str)
{
  std::cout << "*Constructor called! for [" << this->getData() << "] called!*" << std::endl;
  this->_int = atoi(this->getData().c_str());
  //std::cout << "int: " << this->getInt() << std::endl;
  this->_double = atof(this->getData().c_str());
  //std::cout << "double: " << this->getDouble() << std::endl;
  this->_type = checkType();
  return ;
}

Literal::~Literal()
{
  std::cout << "*Destructor for [" << this->getData() << "] called!*" << std::endl;
  return ;
}

Literal::Literal(const Literal &co)
{
  *this = co;
  return ;
}

//Surcharge-----------------------
Literal &Literal::operator=(const Literal &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}
//G&S----------------------------
std::string Literal::getData()const
{
  return (this->_data);
}

int Literal::getType()const
{
  return (this->_type);
}

char Literal::getChar()const
{
  return (this->_char);
}

int Literal::getInt()const
{
  return (this->_int);
}

float Literal::getFloat()const
{
  return (this->_float);
}

double Literal::getDouble()const
{
  return (this->_double);
}

//Method-------------------------
int   Literal::checkType()const
{
  return (0);
}
//Exception----------------------
//const char *Literal::ErrorExcept::what() const throw()
//{
//  return ("Error convert..");
//}
