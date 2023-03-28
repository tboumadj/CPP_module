/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 08:46:52 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ~ScavTrap();
  ScavTrap(const ScavTrap &co);
  ScavTrap &operator=(const ScavTrap &co);
  
  void  attack(const std::string &target);
  void  guardGate();
  void  print();

private:

  unsigned int _guardmode;

};

#endif
