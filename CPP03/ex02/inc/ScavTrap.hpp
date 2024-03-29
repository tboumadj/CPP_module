/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 08:37:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 08:37:29 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ~ScavTrap();
  ScavTrap(const ScavTrap &co);
  ScavTrap &operator=(const ScavTrap &co);
  
  void  attack(const std::string &target);
  void  guardGate();

private:

  unsigned int _guardmode;

};

#endif
