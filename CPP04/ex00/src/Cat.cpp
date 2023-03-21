/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:45:16 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 20:17:37 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
  std::cout << "*Default constructor Cat called!*" << std::endl;
  return ;
}

Cat::Cat(std::string str): Animal(str)
{
  std::cout << "*Constructor of Cat " << this->_type <<  " called!*" << std::endl;
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

void  Cat::makeSound()
{
  std::cout << this->_type << " Meows!" << std::endl;
  return ;
}
