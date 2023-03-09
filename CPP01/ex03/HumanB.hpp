/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:01 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:02 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class  HumanB
{
  public :

    HumanB(std::string name);
    ~HumanB(void);
   
    std::string name;
    Weapon  *weapon;

    void  attack(void);
    void  setWeapon(Weapon &nweapon);

  private :

};

#endif
