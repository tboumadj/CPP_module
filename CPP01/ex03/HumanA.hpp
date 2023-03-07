#ifndef  HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class  HumanA
{
  public :

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    std::string   name;
    Weapon  &weapon;
    
    void  attack(void);
    void  setWeapon(Weapon nweapon);

  private :

  };

#endif
