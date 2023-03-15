#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ~ScavTrap();
  ScavTrap(const ScavTrap &co);
  ScavTrap &operator=(const ScavTrap &co);
  
  void  attack(const std::string &target);
  void  takeDamage(unsigned int amount);
  void  beRepaired(unsigned int amount);

private:

  std::string   _name;
  unsigned int  _hit;
  unsigned int  _nrj;
  unsigned int  _atk;

};

#endif
