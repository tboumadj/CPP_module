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

#include "ClapTrap.hpp"

int main()
{
  ClapTrap a("Killa");
  ClapTrap b(a);
  //ClapTrap c;
 // c = a;
  int i = 0;

  while (i++ < 12)
  {
    a.attack("PMC");
    a.takeDamage(6);
    a.beRepaired(4);
    b.attack("SCAV");
    b.beRepaired(2);
    b.takeDamage(6);
    //c.attack("Robot");
  }
  return (0);
}