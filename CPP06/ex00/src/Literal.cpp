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

ScalarConverter::ScalarConverter()
{
  std::cout << "*Default constructor called!*" << std::endl;
  return ;
}

ScalarConverter::ScalarConverter(const std::string str): _data(str)
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

ScalarConverter::~ScalarConverter()
{
  std::cout << "*Destructor for [" << this->getData() << "] called!*" << std::endl;
  return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &co)
{
  *this = co;
  return ;
}

//Surcharge-----------------------
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}
//G&S----------------------------
std::string ScalarConverter::getData()const
{
  return (this->_data);
}

int ScalarConverter::getType()const
{
  return (this->_type);
}

char ScalarConverter::getChar()const
{
  return (this->_char);
}

int ScalarConverter::getInt()const
{
  return (this->_int);
}

float ScalarConverter::getFloat()const
{
  return (this->_float);
}

double ScalarConverter::getDouble()const
{
  return (this->_double);
}

//Method-------------------------

bool  ScalarConverter::isInt(const char *tmp)
{
  if (tmp == NULL || *tmp == '\0')
    return false;
  if (*tmp == '-' || *tmp == '+')
    ++tmp;
  while (*tmp != '\0')
  {
    if (!isdigit(*tmp))
      return false;
    ++tmp;
  }
  return true;
}

bool  ScalarConverter::isDouble(const char *tmp)
{
  if (tmp == NULL || *tmp == '\0')
    return false;
  if (*tmp == '-' || *tmp == '+')
    ++tmp;
  if (isdigit(*tmp) == 0)
    return false;
  char *endTmp;
  strtod(tmp, &endTmp);

  return (*endTmp == '\0');
  //return true;
}

bool ScalarConverter::isFloat(const char *tmp)
{
  return false;
}

bool  ScalarConverter::isChar(const char *tmp)
{
  //return true;
  return (tmp != NULL && std::strlen(tmp) == 1);
}

bool  ScalarConverter::isNanif(const char *tmp)
{
  if (this->getData().compare("nan") == 0 || this->getData().compare("nanf") == 0 || this->getData().compare("+inf") == 0 ||
        this->getData().compare("+inff") == 0 || this->getData().compare("-inf") == 0 || this->getData().compare("-inff") == 0)
    return true;
  return false;
}

int   ScalarConverter::checkType()
{
  const char *tmp = _data.c_str();
  
  if (isInt(tmp))
  {
    std::cout << "Integer: " << atoi(tmp) << std::endl;
    return (INT);
  }
  else if (isNanif(tmp))
  {
    std::cout << "Nanif: " << tmp << std::endl;
    return (NANIF);
  }
  else if (isDouble(tmp))
  {
    std::cout << "Double: " << atof(tmp) << std::endl;
    return (DOUBLE);
  }
  else if (isFloat(tmp))
  {
    std::cout << "Float: " << static_cast<float>(strtod(tmp, NULL)) << std::endl;
    return (FLOAT);
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
