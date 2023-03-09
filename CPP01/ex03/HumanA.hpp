/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:10 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:12 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class  HumanA
{
  public :

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    std::string   name;
    Weapon  &weapon;
    
    void  attack(void);
    void  setWeapon(Weapon nweapon);

  private :

  };

#endif
