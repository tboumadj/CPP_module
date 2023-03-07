#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

class Weapon
{
  public :

    Weapon(std::string type);
    ~Weapon(void);

    std::string&  getType(void);
    void          setType(std::string param);

  private:

    std::string  type;  
};
#endif
