/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:45:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 17:45:03 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
  std::cout << "*Default constructor Dog called!*" << std::endl;
  return ;
}

Dog::Dog(std::string str)
{
  std::cout << "*Constructor Dog called!*" << std::endl;
  return ;
}

Dog::~Dog()
{
  std::cout << "*Destructor Dog called!*" << std::endl;
  return ;
}

Dog::Dog(const Dog &co)
{
  return ;
}

Dog &Dog::operator=(const Dog &co)
{
  return (*this);
}


