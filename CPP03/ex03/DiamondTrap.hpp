/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:03 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 13:51:06 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"

class DiamondTrap: public ClapTrap
{
public:
  DiamondTrap();
  DiamondTrap(std::string str);
  ~DiamondTrap();
  DiamondTrap(const DiamondTrap &co);
  DiamondTrap &operator=(const DiamondTrap &co);

  void  whoAmi();
};

#endif
