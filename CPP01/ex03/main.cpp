#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon club = Weapon("RPK");

    HumanA killa("Killa", club);
    killa.attack();
    club.setType("some other Grenade");
    killa.attack();
  }
  {
    Weapon club = Weapon("Sledge Hammer");

    HumanB tagilla("Tagilla");
    tagilla.setWeapon(club);
    tagilla.attack();
    club.setType("some other red Rebel");
    tagilla.attack();
  }
  return (0);
}
