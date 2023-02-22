/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:44:29 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/22 15:00:45 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Constructor of Zombie called" <<  std::endl;
	this->name = name;
    this->welcome();
    return ;
}

Zombie::~Zombie(void)
{
	if (!this->name.empty())
    	std::cout << this->name << " is dead..." << std::endl;
	//delete(this);
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
			Zombie *tmp = newZombie(data);
			this->announce();
			data.clear();
    	}
	}
    return ;
}