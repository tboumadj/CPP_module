/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 08:59:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main()
{
  ClapTrap a("Tagilla");
  a.print();
  ScavTrap b("Killa");
  b.print();
  FragTrap c("Shturmann");
  c.print();
  DiamondTrap d;
  d.whoAmi();
  d.print();
  return (0);
}
