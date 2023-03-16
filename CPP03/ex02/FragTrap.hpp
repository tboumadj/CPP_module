#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string str);
  ~FragTrap();
  FragTrap(const FragTrap &co);
  FragTrap &operator=(const FragTrap &co);
  void  highFivesGuys(void);

};

#endif
