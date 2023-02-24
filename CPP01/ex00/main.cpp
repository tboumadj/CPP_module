/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:38:59 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/24 19:19:17 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Data::Data(void)
{
}

Data::~Data(void)
{
}

void    Data::welcome(void)
{
    std::cout<<"*WELCOME TO MY ZOMBIE CREATOR*" << std::endl;
	std::cout << "*Type a (name) for ur new Zombie*" << std::endl << "*Type (random) for random Zombie*" << std::endl << "*Type (exit) for finish*" << std::endl;
    return ;
}

void    Data::entry_road(void)
{
    std::string data;
	this->count = -1;
	
	welcome();
    while (data.empty())
    {
        std::getline(std::cin, data);
        if (std::cin.eof())
        	return ;
        if (data == "exit" || data == "EXIT")
		{
			int len = 0;
			while (len <= count)
			{
				delete (zmbi[len]);
				len++;
			}
			std::cout << "*ZOMBIE CREATOR SHUT DOWN!*" << std::endl;
        	return ;
		}
		else if (data == "random" || data == "RANDOM")
		{
			randomChump("Killa");
			data.clear();
		}
        else if (!data.empty())
    	{
			this->count += 1;
			zmbi[count] = zmbi[count]->newZombie(data);
			data.clear();
			zmbi[count]->announce();
			//delete (zmbi[count]);
    	}
	}
    return ;
}

int	main()
{
	Data z;

	z.entry_road();
	return (0);
}