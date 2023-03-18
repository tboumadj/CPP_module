/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:08 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 16:56:10 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
  std::cout << "*Constructor default DiamondTrap called!*" << std::endl;
  this->_name = "None_DT";
  this->_hit = FragTrap::_hit;
  this->_nrj = ScavTrap::_nrj;
  this->_atk = FragTrap::_atk;
  return ;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_clap_name")
{
  this->_name = str;
  this->_hit = FragTrap::_hit;
  this->_nrj = ScavTrap::_nrj;
  this->_atk = FragTrap::_atk;
  std::cout << "*Constructor Diamond of " << this->_name << " called!*" << std::endl;
  return ;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "*Destructor Diamond of " << this->_name << " called!*" << std::endl;
  return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &co): ClapTrap(co), ScavTrap(co), FragTrap(co)
{
  *this = co;
  std::cout << "*Recopy Diamond constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &co)
{
  this->_name = co._name + "_clap_name";
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  std::cout << "*Assignement Diamond operator called!*" << std::endl;
  return (*this);
}

void  DiamondTrap::whoAmi()
{
  std::cout << "I'm a DiamondTrap named (" <<  this->_name << ") and my ClapTrap origine is (" << ClapTrap::_name << ")" << std::endl;
  return ;
}

void  DiamondTrap::attack(const std::string &target)
{
  ScavTrap::attack(target);
  return ;
}
