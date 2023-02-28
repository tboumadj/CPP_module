/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:25:51 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/27 18:17:33 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Data::Data(void)
{
	std::cout<<"Constructor called!"<<std::endl;
	return ;
}

Data::~Data(void)
{
	std::cout<<"Destructor called!"<<std::endl;
	return ;
}

void    Data::welcome(void)
{
    std::cout << "*WELCOME TO MY ZOMBIE HORDE CREATOR*" << std::endl;
    return ;
}

int main(int argc, char **argv)
{
	Data	d;
	int	count = argc - 1;
	int	i = 0;
	int j = count;

	std::cout << count << std::endl;
	d.welcome();
	//---------TEST-------//;
	while (i < count)
	{
		data_name[i] = argv[i + 1];
		i++;
	}
	i = 0;
	while (i < count)
	{
		std::cout << data_name[i] << std::endl;
		i++;
	}
	//--------------------//;
	zombieHorde(count, "name");

    return (0);
}
