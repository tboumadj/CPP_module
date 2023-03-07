#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
  std::cout << "constructor Weapon called!" << std::endl;
  return ;
}

Weapon::~Weapon(void)
{
  std::cout << "destructor Weapon called!" << std::endl;
  return ;
}

std::string&   Weapon::getType(void)
{
  return (this->type);
}

void  Weapon::setType(std::string param)
{
  this->type = param;
  return ;
}

