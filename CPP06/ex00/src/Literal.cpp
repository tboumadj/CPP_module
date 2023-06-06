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
#include <climits>

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
  convert();
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
//------------------
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
  if (this->_data.back() == '.')
    return false;
  char *endTmp;
  strtod(tmp, &endTmp);

  return (*endTmp == '\0');
  //return true;
}

bool ScalarConverter::isFloat(const char *tmp)
{
  bool decimdot = false;
  bool decimf = false;
  //std::cout << "_Data : " << this->_data << std::endl;
  if (tmp == NULL || *tmp == '\0')
    return false;
  if (*tmp == '-' || *tmp == '+')
    ++tmp;
  if (isdigit(*tmp) == 0)
    return false;
  while (tmp)
  {
    if (isdigit(*tmp))
      ++tmp;
    else if (*tmp == '.')
    {
      if (decimdot == true || isdigit(*tmp+1))
        return false;
      decimdot = true;
      ++tmp;
    }
    else if (*tmp == 'f' || *tmp == 'F')
    {
      if (decimf == true)
        return false;
      decimf = true;
      ++tmp;
    }
    else
    {
      if (*tmp == '\0')
        break;
      return false;
    }
  }
  if (this->_data.back() != 'f' && this->_data.back() != 'F')
    return false;
  return true;
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
//---------------------------

void  ScalarConverter::convertChar()
{
  this->_char = static_cast<unsigned char>(this->getData()[0]);
  this->_int = static_cast<int>(this->getChar());
  this->_float = static_cast<float>(this->getInt());
  this->_double = static_cast<double>(this->getChar());
  return ;
}

void  ScalarConverter::convertInt()
{
  //-------------
  if (checkMax() == true)
  {
    this->_int = atoi(this->getData().c_str());
    this->_double = atof(this->getData().c_str());
  //-------------
    this->_int = static_cast<int>(this->getDouble());
    this->_char = static_cast<unsigned char>(this->getInt());
    this->_float = static_cast<float>(this->getDouble());
  }
  return ;
}

void  ScalarConverter::convertFloat()
{
  if (checkMax() == true)
  {
    this->_int = atoi(this->getData().c_str());
    this->_double = atof(this->getData().c_str());
  //----------------
    this->_float = static_cast<float>(this->getDouble());
    this->_char = static_cast<char>(this->getFloat());
    this->_int = static_cast<int>(this->getFloat());
  }
  return ;
}

void  ScalarConverter::convertDouble()
{
  if (checkMax() == true)
  {
    this->_int = atoi(this->getData().c_str());
    this->_double = atof(this->getData().c_str());
  //------------------
    this->_char = static_cast<char>(this->getDouble());
    this->_int = static_cast<int>(this->getDouble());
    this->_float = static_cast<float>(this->getDouble());
  }
  return ;
}

//----------------------------

bool  ScalarConverter::checkMax()
{
  std::cout << "length of _Data: " << strlen(this->getData().c_str()) << std::endl;
  if(this->getData().c_str()[0] == '-')
  {
    const int INT_MIN_LENGTH = std::to_string(INT_MIN).length();
    std::cout << "int min lgth: " << INT_MIN_LENGTH << std::endl;
    if (strlen(this->getData().c_str()) > INT_MIN_LENGTH)
      {
        std::cout << "Integer Int min not valable .." << std::endl;
        return false;
      }
  }
  else
  {
    const int INT_MAX_LENGTH = std::to_string(INT_MAX).length();
    std::cout << "int max lgth: " << INT_MAX_LENGTH << std::endl;
    if (strlen(this->getData().c_str()) > INT_MAX_LENGTH)
    {
      std::cout << "int max not valable.." << std::endl;
      return false;
    }
  }
  const long max_long = atol(this->_data.c_str());
  std::cout << "long : " << max_long << std::endl;
  if (max_long > INT_MAX || max_long < INT_MIN)
  {
    std::cout << "error value of Integer.." << std::endl;
    return false;
  }
  return true;
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

void  ScalarConverter::convert()
{
  void (ScalarConverter::*f[])() = {&ScalarConverter::convertChar, &ScalarConverter::convertInt, &ScalarConverter::convertFloat, &ScalarConverter::convertDouble};
  int types[] = {CHAR, INT, FLOAT, DOUBLE};

  if (this->getType() == NANIF)
    return ;

  int i = -1;
  while (++i < 4)
  {
    if (this->getType() == types[i])
    {
      (this->*f[i])();
        break ;
    }
  }
  //if (i == 4)
  //  throw ScalarConverter::ErrorExcept();
  return ;
}

void  ScalarConverter::printConvert()const
{
  if (this->getType() == CHAR)
  {
    
  }
  return ;
}

//Exception----------------------
//const char *Literal::ErrorExcept::what() const throw()
//{
//  return ("Error convert..");
//}
