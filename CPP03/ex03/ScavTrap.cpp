/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:42 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 11:45:44 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
  std::cout << "*Constructor default ScavTrap called!*" << std::endl;
  this->_name = "None_ST";
  this->_hit = 100;
  this->_nrj = 50;
  this->_atk = 20;
  this->_guardmode = 0;
  return ;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
  std::cout << "*Constructor Scav of " << this->_name << " called!*" << std::endl;
  this->_hit = 100;
  this->_nrj = 50;
  this->_atk = 20;
  this->_guardmode = 0;
  return ;
}

ScavTrap::~ScavTrap()
{
  std::cout << "*Destructor Scav of " << this->_name << " called!*" << std::endl;
  return ;
}

ScavTrap::ScavTrap(const ScavTrap &co)
{
  *this = co;
  this->_guardmode = 0;
  std::cout << "*Recopy Scav constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &co)
{
  this->_name = co._name + "ScavClone";
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  this->_guardmode = 0;
  std::cout << "*Assignement Scav operator called!*" << std::endl;
  return (*this);
}

void  ScavTrap::guardGate()
{
  if (this->_guardmode == 0)
  {
    this->_guardmode = 1;
    std::cout << "Scav " << this->_name << " mode GateKeeper activated" << std::endl;
  }
  else
    std::cout << "Scav " << this->_name << " is already in gateKeeper mode." << std::endl;
  return ;
}

void  ScavTrap::attack(const std::string &target)
{
  if (this->_nrj > 0 && this->_hit > 0)
  {
    std::cout << "*ScavTrap* " << this->_name << " attacks " << target << ", causing " << this->_atk << " of damage!" << std::endl;
    this->_nrj--;
  }
  else if (this->_nrj == 0)
    std::cout << "*ScavTrap* " << this->_name << " No more energy..." << std::endl;
  else
    std::cout << "*ScavTrap* " << this->_name << " is already dead..." << std::endl;
  return ;
}
