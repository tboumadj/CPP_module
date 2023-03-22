/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:01 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/22 14:37:44 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

//Animal

Animal::Animal(): _type("")
{
  std::cout << "*Default constructor Animal called!*" << std::endl;
  return ;
}

Animal::Animal(std::string str): _type(str)
{
  std::cout << "*Constructor Animal called!*" << std::endl;
  return ;
}

Animal::~Animal()
{
  std::cout << "*Destructor Animal called!*" << std::endl;
  return ;
}

Animal::Animal(const Animal &co)
{
  *this = co;
  return ;
}

Animal &Animal::operator=(const Animal &co)
{
  this->_type = co._type;
  return (*this) ;
}

void  Animal::makeSound() const
{
  std::cout << "Animal make sound..." << std::endl;
  return ;
}

std::string  Animal::getType() const
{
  return (this->_type);
}

//WrongAnimal

WrongAnimal::WrongAnimal(): _wrongtype("")
{
  std::cout << "*Default constructor of WrongAnimal called!*" << std::endl;
  return ;
}

WrongAnimal::WrongAnimal(std::string str): _wrongtype(str)
{
  std::cout << "*Constructor of WrongAnimal called!*" << std::endl;
  return ;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "*Destructor of WrongAnimal called!*" << std::endl;
  return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &co)
{
  *this = co;
  return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &co)
{
  this->_wrongtype = co._wrongtype;
  return (*this);
}

void  WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal make sound..." << std::endl;
  return ;
}

std::string WrongAnimal::getType() const
{
  return (this->_wrongtype);
}

