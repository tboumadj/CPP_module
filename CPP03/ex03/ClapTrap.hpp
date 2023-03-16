/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/16 11:45:21 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
public:
  ClapTrap();
  ClapTrap(std::string str);
  ~ClapTrap();
  ClapTrap(const ClapTrap &co);
  ClapTrap &operator=(const ClapTrap &co);

  void  attack(const std::string &target);
  void  takeDamage(unsigned int amount);
  void  beRepaired(unsigned int amount);

protected:

  std::string   _name;
  unsigned int  _hit;
  unsigned int  _nrj;
  unsigned int  _atk;
  
};

#endif
