#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ~ScavTrap();
  ScavTrap(const ScavTrap &co);
  ScavTrap &operator=(const ScavTrap &co);
  
  void  attack(const std::string &target);
  void  guardGate();

private:

};

#endif
