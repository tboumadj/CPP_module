#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

class Weapon
{
  public :

    Weapon(void);
    ~Weapon(void);

    std::string  getType(void);
    void          setType(void);

  private:

    std::string  type;  
};
#endif
