/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:41:20 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/24 19:07:24 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define    ZOMBIE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>


class   Zombie 
{

public  :

    Zombie(void);
    ~Zombie(void);
    
	void	announce(void);
    std::string		name;
	Zombie*	newZombie(std::string str);

};

class	Data
{

public	:

	Data(void);
	~Data(void);

	void	welcome(void);
	void	entry_road(void);
	int		count;
	
private	:

	Zombie	*zmbi[20];

};

void	randomChump(std::string str);

#endif