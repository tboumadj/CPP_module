/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 15:36:10 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
  ClapTrap a("Tagilla");
  ScavTrap b("Killa");
  int i = 0;

//Test1
  b.guardGate();
  while (i++ < 12)
  {
    a.attack("PMC");
    b.attack("Scav");
    a.takeDamage(9);
    a.beRepaired(1);
    b.takeDamage(42);
    b.beRepaired(2);
  }
  b.guardGate();
  //Test2
  //
  return (0);
}
