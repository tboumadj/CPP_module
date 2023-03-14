/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 13:38:14 by tboumadj         ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap &co)
{
  std::cout << "*Recopy constructor called!*" << std::endl;
  *this = co;
  return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &co)
{
  std::cout << "*Assignement operator called!*" << std::endl;
  this->_name = co._name;
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  return(*this);
}

void  ClapTrap::attack(const std::string &target)
{
  std::cout << "ClapTrap " << this->_name << " attacks " << "(TARGET)" << " , " << "causing " << this->_atk << " points of damage!" << std::endl;
  return ;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << this->_name << " take damage" << std::endl;  
  return ;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "ClapTrap " << this->_name << " healing nmr de vie" << std::endl;
  return ;
}
