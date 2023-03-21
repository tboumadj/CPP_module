/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:01 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 19:08:55 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

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

void  Animal::makeSound()
{
  std::cout << "Animal make sound..." << std::endl;
  return ;
}
