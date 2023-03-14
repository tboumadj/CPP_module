/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/14 12:13:29 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
public:
  ClapTrap(std::string str);
  ~ClapTrap();
  ClapTrap(const ClapTrap &);
  ClapTrap &operator=(ClapTrap &&);
  ClapTrap &operator=(const ClapTrap &);

  void  attack(const std::string &target);
  void  takeDamage(unsigned int amount);
  void  beRepaired(unsigned int amount);

private:

  std::string   _name;
  unsigned int  _hit;
  unsigned int  _nrj;
  unsigned int  _atk;
  
};

#endif
