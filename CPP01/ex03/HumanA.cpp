/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:16 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:17 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
  std::cout << "constructor of HumanA called!" << std::endl;
  return ;
}

HumanA::~HumanA(void)
{
  std::cout << "destructor of HumanA called!" << std::endl;
  return ;
}

void  HumanA::attack(void)
{
  std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
  return ;
}

void  HumanA::setWeapon(Weapon nweapon)
{
  this->weapon = nweapon;
  return ;
}


