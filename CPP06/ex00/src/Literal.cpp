/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:38:12 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/01 17:39:04 by tboumadj         ###   ########.fr       */
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
  //this->_int = atoi(this->getData().c_str());
  //std::cout << "int: " << this->getInt() << std::endl;
  //this->_double = atof(this->getData().c_str());
  //std::cout << "double: " << this->getDouble() << std::endl;
  this->_type = checkType();
  std::cout << "Type is: " << _type << std::endl;
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

bool  Literal::isInt(const char *tmp)
{
  if (tmp == NULL || *tmp == '\0')
    return false;
  while (*tmp != '\0')
  {
    if (!isdigit(*tmp))
      return false;
    ++tmp;
  }
  return true;
}

bool  Literal::isDouble(const char *tmp)
{
  if (tmp == NULL || *tmp == '\0')
    return false;
  char *endTmp;
  strtod(tmp, &endTmp);

  return (*endTmp == '\0');
  //return true;
}

bool Literal::isFloat(const char *tmp)
{
  return false;
}

bool  Literal::isChar(const char *tmp)
{
  //return true;
  return (tmp != NULL && std::strlen(tmp) == 1);
}

int   Literal::checkType()
{
  const char *tmp = _data.c_str();
  
  if (isInt(tmp))
  {
    std::cout << "Integer: " << atoi(tmp) << std::endl;
    return (INT);
  }
  else if (isDouble(tmp))
  {
    std::cout << "Double: " << atof(tmp) << std::endl;
    return (DOUBLE);
  }
  else if (isFloat(tmp))
  {
    std::cout << "Float: " << static_cast<float>(strtod(tmp, NULL)) << std::endl;
  }
  else if (isChar(tmp))
  {
    std::cout << "Char: " << *tmp << std::endl;
    return (CHAR);
  }
  else
  {
    std::cout << "Error: invalid" << std::endl;
    //throw
    return (ERROR);
  }
  return (0);
}

//Exception----------------------
//const char *Literal::ErrorExcept::what() const throw()
//{
//  return ("Error convert..");
//}
