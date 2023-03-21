/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:01 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 16:49:50 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
  std::cout << "*Default constructor Animal called!*" << std::endl;
  return ;
}

Animal::Animal(std::string str)
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
  return ;
}

Animal &Animal::operator=(const Animal &co)
{
  return (*this) ;
}
