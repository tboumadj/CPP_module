/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:44:29 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/22 13:12:20 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Constructor of Zombie called" <<  std::endl;
    this->welcome();
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is dead..." << std::endl;
    return ;
}

void    Zombie::welcome(void)
{
    std::cout<<"Welcome to my Zombie creator" << std::endl;
    return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::entry_road(void)
{
    std::string data;

    while (data.empty())
    {
        std::cout << "Type a *name* for ur new Zombie or *random* for random Zombie - type *exit* for finish" << std::endl;
        std::getline(std::cin, data);
        if (std::cin.eof())
        	return ;
        if (data == "exit" || data == "EXIT")
		{
			std::cout << "Zombie creator Shut down!" << std::endl;
        	return ;
		}
		else if (data == "random" || data == "RANDOM")
		{
			randomChump("Killa");
			data.clear();
		}
        else if (!data.empty())
    	{
            this->name = data;
			//newZombie(this->name);
            std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
			data.clear();
    	}
	}
    return ;
}