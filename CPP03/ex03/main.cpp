/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/20 17:29:38 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
  //ClapTrap a("Tagilla");
  //ScavTrap b("Killa");
  //FragTrap c("Shturmann");
  DiamondTrap d;
  //DiamondTrap e("Glukhar");
  //DiamondTrap f(e);
  d.attack("PMC");
  d.whoAmi();
  d.print();  
  //e.attack("SCAV");
  //e.whoAmi();
  //f.whoAmi();
  //f.attack("WALL");
  //int i = 0;

  //Test1
  //Test2
  //
  return (0);
}
