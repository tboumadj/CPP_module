/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:45:16 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 17:44:53 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
  std::cout << "*Default constructor Cat called!*" << std::endl;
  return ;
}

Cat::Cat(std::string str)
{
  std::cout << "*Constructor Cat called!*" << std::endl;
  return ;
}

Cat::~Cat()
{
  std::cout << "*Destructor Cat called!*" << std::endl;
  return ;
}

Cat::Cat(const Cat &co)
{
  return ;
}

Cat &Cat::operator=(const Cat &co)
{
  return (*this);
}
