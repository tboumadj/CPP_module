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

char *data_name[20];

class   Zombie
{

public	:
	
    Zombie(void);
    ~Zombie(void);
	
    void    annonce(void);
	std::string	name;
	
};


class	Data
{

public	:

	Data(void);
	~Data(void);

	void	welcome(void);
	//Zombie	scav[20];
};

Zombie* newZombie(std::string str);
Zombie*	zombieHorde( int N, std::string name );

#endif
