/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:03 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 16:54:39 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
public:
  DiamondTrap();
  DiamondTrap(std::string str);
  virtual ~DiamondTrap();
  DiamondTrap(const DiamondTrap &co);
  DiamondTrap &operator=(const DiamondTrap &co);

  void  whoAmi();
  void  attack(const std::string &target);

  private:

    std::string _name;
};

#endif
