/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 15:30:06 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  ClapTrap a("Killa");
  ClapTrap b(a);
  ClapTrap c;
  c = a;
  int i = 0;

  while (i++ < 3)
  {
    a.attack("PMC");
    a.takeDamage(7);
    a.beRepaired(5);
    b.attack("SCAV");
    b.beRepaired(2);
    b.takeDamage(10);
  }
  return (0);
}
