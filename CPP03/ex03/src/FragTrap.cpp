/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:37 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 08:51:11 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
  std::cout << "*Constructor default FragTrap called!*" << std::endl;
  this->_name = "None_FT";
  this->_hit = 100;
  this->_nrj = 100;
  this->_atk = 30;
  return ;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
  std::cout << "*Constructor Frag of " << this->_name << " called!*" << std::endl;
  this->_hit = 100;
  this->_nrj = 100;
  this->_atk = 30;
  return ;
}

FragTrap::~FragTrap()
{
  std::cout << "*Destructor Frag of " << this->_name << " called!*" << std::endl;
  return ;
}

FragTrap::FragTrap(const FragTrap &co)
{
  *this = co;
  std::cout << "*Recopy Frag constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

FragTrap &FragTrap::operator=(const FragTrap &co)
{
  this->_name = co._name + "FragClone";
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  std::cout << "*Assignement Frag operator called!*" << std::endl;
  return (*this);
}

void  FragTrap::highFivesGuys()
{
  std::cout << this->_name << " want to high fives with someone..." << std::endl;
  return ;
}

void  FragTrap::print()
{
  std::cout << "hit = " << this->_hit << std::endl;
  std::cout << "nrj = " << this->_nrj << std::endl;
  std::cout << "atk = " << this->_atk << std::endl;
  std::cout << "name = " << this->_name << std::endl;
  return ;
}
