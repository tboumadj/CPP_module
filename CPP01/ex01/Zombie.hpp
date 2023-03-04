/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:57:06 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/28 10:38:39 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class   Zombie
{

public	:
	
    Zombie(void);
    ~Zombie(void);
	
	  std::string	name;
    void  announce(void);
    void  setName(std::string str);
};


class	Data
{

public	:

	  Data(void);
	  ~Data(void);

    void  welcome(void);
    char  *data_name[20];
    Zombie* zombieHorde(int N, std::string name);
};

Zombie* newZombie(std::string str);

#endif
