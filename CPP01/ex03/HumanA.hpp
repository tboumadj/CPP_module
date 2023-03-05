#ifndef  HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class  HumanA
{
  public :

    HumanA(std::string name, Weapon *arme);
    ~HumanA(void);

    std::string   name;
    Weapon  *arme;
    
    void  attack(void);

  private :

  };

#endif
