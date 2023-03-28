/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 08:35:32 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
  ClapTrap a("Tagilla");
  ScavTrap b("Killa");
  FragTrap c("Shturmann");
  c.highFivesGuys();
  //Test1
  int i = 0;
  while (i < 10)
  {
    a.attack("PMC");
    a.takeDamage(20);
    a.beRepaired(15);
    //
    b.attack("PMC");
    b.guardGate();
    b.takeDamage(20);
    b.beRepaired(15);
    //
    c.attack("PMC");
    c.takeDamage(20);
    c.beRepaired(15);
    c.highFivesGuys();
    i++;
  }
  return (0);
}
