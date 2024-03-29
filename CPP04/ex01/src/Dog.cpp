/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:45:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 15:03:29 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include <string>

Dog::Dog(): Animal()
{
  std::cout << "*Default constructor Dog called!*" << std::endl;
  this->_brain = new Brain;
  return ;
}

Dog::Dog(std::string str): Animal(str)
{
  std::cout << "*Constructor of Dog " << this->_type << " called!*" << std::endl;
  this->_brain = new Brain;
  return ;
}

Dog::~Dog()
{
  std::cout << "*Destructor of Dog " << this->_type << " called!*" << std::endl;
  delete this->_brain;
  return ;
}

Dog::Dog(const Dog &co)
{
  *this = co;
  return ;
}

Dog &Dog::operator=(const Dog &co)
{
  this->_type = co._type;
  return (*this);
}

void  Dog::makeSound() const
{
  std::cout << this->_type << " Bark!" << std::endl;
  return ;
}

std::string Dog::getType() const
{
  return (this->_type);
}
