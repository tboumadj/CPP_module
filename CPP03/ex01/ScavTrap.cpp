#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _name(""), _hit(100), _nrj(50), _atk(20)
{
  std::cout << "*Constructor default ScavTrap called!*" << std::endl;
  return ;
}

ScavTrap::ScavTrap(std::string str): _name(str), _hit(100), _nrj(50), _atk(20)
{
  std::cout << "*Constructor Scav of " << this->_name << " called!*" << std::endl;
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
