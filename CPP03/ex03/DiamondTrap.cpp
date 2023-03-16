/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:08 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 14:45:48 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
  std::cout << "*Constructor default DiamondTrap called!*" << std::endl;
  this->_hit = FragTrap::_hit;
  this->_nrj = ScavTrap::_nrj;
  this->_atk = FragTrap::_atk;
  return ;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_clap_name")
{
  std::cout << "*Constructor Diamond of " << this->_name << " called!*" << std::endl;
  return ;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "*Destructor Diamond of " << this->_name << " called!*" << std::endl;
  return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &co)
{
  *this = co;
  std::cout << "*Recopy Diamond constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &co)
{
  this->_name = co._name + "_clap_name";
  std::cout << "*Assignement Diamond operator called!*" << std::endl;
  return (*this);
}

void  DiamondTrap::whoAmi()
{
  std::cout << "("<< this->_name << ")" << " who am I ???" << std::endl;
  return ;
}
