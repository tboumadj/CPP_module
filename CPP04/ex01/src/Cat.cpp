/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:45:16 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/22 14:44:31 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include <string>


//CAT

Cat::Cat(): Animal()
{
  std::cout << "*Default constructor Cat called!*" << std::endl;
  return ;
}

Cat::Cat(std::string str): Animal(str)
{
  std::cout << "*Constructor of Cat " << this->_type << " called!*" << std::endl;
  return ;
}

Cat::~Cat()
{
  std::cout << "*Destructor of Cat " << this->_type << " called!*" << std::endl;
  return ;
}

Cat::Cat(const Cat &co)
{
  *this = co;
  return ;
}

Cat &Cat::operator=(const Cat &co)
{
  this->_type = co._type;
  return (*this);
}

void  Cat::makeSound() const
{
  std::cout << this->_type << " Meows!" << std::endl;
  return ;
}

std::string Cat::getType() const
{
  return (this->_type);
}

//WrongCat

WrongCat::WrongCat(): WrongAnimal()
{
  std::cout << "*Default construtor of WrongCat called!*" << std::endl;
  return ;
}

WrongCat::WrongCat(std::string str): WrongAnimal(str)
{
  std::cout << "*Constructor of WrongCat " << this->_wrongtype << " called!*" << std::endl;
  return ;
}

WrongCat::~WrongCat()
{
  std::cout << "*Destructor of WrongCat " << this->_wrongtype << " called!*" << std::endl;
  return ;
}

WrongCat::WrongCat(const WrongCat &co)
{
  *this = co;
  return ;
}

WrongCat &WrongCat::operator=(const WrongCat &co)
{
  this->_wrongtype = co._wrongtype;
  return (*this);
}

std::string WrongCat::getType() const
{
  return (this->_wrongtype);
}




