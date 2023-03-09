/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:06 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:07 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name),weapon(NULL)
{
  std::cout << "constructor of HumanB called!" << std::endl;
  //this->name = name;
  return ;
}

HumanB::~HumanB(void)
{
  std::cout << "destructor of HumanB called!" << std::endl;
  return ;
}

void  HumanB::attack(void)
{
  std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl; 
  return ;
}

void  HumanB::setWeapon(Weapon &nweapon)
{
  this->weapon = &nweapon;
  return ;
}

