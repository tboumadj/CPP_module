/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 15:38:48 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hit(10), _nrj(10), _atk(0)
{
  std::cout << "*Constructor default called!*" << std::endl;
  return ;
}

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
  *this = co;
  std::cout << "*Recopy constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &co)
{
  this->_name = co._name + "Clone";
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  std::cout << "*Assignement operator called!*" << std::endl;
  return(*this);
}

void  ClapTrap::attack(const std::string &target)
{
  if (this->_nrj > 0 && this->_hit > 0)
  {
    std::cout << "*ClapTrap* " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
    this->_nrj--;
  }
  else
    std::cout << "*ClapTrap* " << this->_name << " No more life or energy" << std::endl;
  return ;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  if ( this->_hit < amount)
    this->_hit = 0;
  else if (this->_hit > amount && this->_nrj > 0)
  {
    this->_hit -= amount;
    this->_nrj--;
    std::cout << "*ClapTrap* " << this->_name << " take " << amount << " damage" << std::endl;
    return ;
  }
  if (this->_nrj == 0)
    std::cout << "*ClapTrap* " << this->_name << " energy is void" << std::endl;
  else
    std::cout << "*ClapTrap* " << this->_name << " is dead!" << std::endl;
  return ;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_hit != 0 && this->_nrj > 0)
  {
    this->_hit += amount;
    this->_nrj--;
    std::cout << "*ClapTrap* " << this->_name << " healing " << amount << " of life!" << std::endl;
  }
  else
    std::cout << "*ClapTrap* " << this->_name << " is already dead cannot be heal!" << std::endl;
  return ;
}
