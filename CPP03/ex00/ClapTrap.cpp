/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 12:08:12 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str): _name(str), _hit(10), _nrj(10), _atk(0)
{
  std::cout << "*Constructor of " << this->_name << " called!*" << std::endl;
  return ;
}

ClapTrap::~ClapTrap()
{
  std::cout << "*Destructor of " << this->_name << " called!*" << std::endl;
  return ;
}

void  ClapTrap::attack(const std::string &target)
{
  return ;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  return ;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  return ;
}
