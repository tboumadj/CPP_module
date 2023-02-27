/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:57:06 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/27 18:22:59 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>

char *data[20];

class   Zombie
{

public	:
	
    Zombie(void);
    ~Zombie(void);
	
    void    annonce(void);

private	:

	std::string	name;
	Zombie* newZombie(std::string str);
	
};


class	Data
{

public	:

	Data(void);
	~Data(void);

	void	welcome(void);
	Zombie	scav[20];
};

Zombie*	zombieHorde( int N, std::string name );

#endif