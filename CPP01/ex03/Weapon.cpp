#include "Weapon.hpp"

Weapon::Weapon(void)
{
  std::cout << "constructor Weapon called!" << std::endl;
  return ;
}

Weapon::~Weapon(void)
{
  std::cout << "destructor Weapon called!" << std::endl;
  return ;
}

std::string   Weapon::getType(void)
{
  std::string str = "TEST";
  return (str);
}

void  Weapon::setType(void)
{
  return ;
}

