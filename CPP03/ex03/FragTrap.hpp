/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:45:05 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 12:19:36 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string str);
  ~FragTrap();
  FragTrap(const FragTrap &co);
  FragTrap &operator=(const FragTrap &co);

  void  highFivesGuys(void);

};

#endif
