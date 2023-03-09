/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:56 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:13:57 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
