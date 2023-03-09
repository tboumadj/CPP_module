/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:43 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:13:44 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

class Weapon
{
  public :

    Weapon(std::string type);
    ~Weapon(void);

    std::string&  getType(void);
    void          setType(std::string param);

  private:

    std::string  type;  
};
#endif
