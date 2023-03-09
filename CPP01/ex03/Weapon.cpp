/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:48 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:13:50 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
  std::cout << "constructor Weapon called!" << std::endl;
  return ;
}

Weapon::~Weapon(void)
{
  std::cout << "destructor Weapon called!" << std::endl;
  return ;
}

std::string&   Weapon::getType(void)
{
  return (this->type);
}

void  Weapon::setType(std::string param)
{
  this->type = param;
  return ;
}

