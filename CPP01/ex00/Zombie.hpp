/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:41:20 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/22 12:44:04 by tboumadj         ###   ########.fr       */
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
    
    std::string		name;
	void	entry_road(void);
	void	announce(void);
	void	randomChump(std::string name);
	Zombie*	newZombie(std::string name);

private :

	void	welcome(void);

};

#endif