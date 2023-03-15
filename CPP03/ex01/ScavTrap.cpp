#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
  std::cout << "*Constructor default ScavTrap called!*" << std::endl;
  this->_name = "";
  this->_hit = 100;
  this->_nrj = 50;
  this->_atk = 20;
  return ;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
  std::cout << "*Constructor Scav of " << this->_name << " called!*" << std::endl;
  this->_hit = 100;
  this->_nrj = 50;
  this->_atk = 20;
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
  std::cout << "*Recopy Scav constructor called!* Welcome to " << this->_name << std::endl;
  return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &co)
{
  this->_name = co._name + "ScavClone";
  this->_hit = co._hit;
  this->_nrj = co._nrj;
  this->_atk = co._atk;
  std::cout << "*Assignement Scav operator called!*" << std::endl;
  return (*this);
}
