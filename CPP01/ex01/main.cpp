/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:25:51 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/08 13:32:08 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Data::Data(void)
{
	std::cout << "Constructor Data called!"<< std::endl;
	return ;
}

Data::~Data(void)
{
	std::cout << "Destructor Data called!"<< std::endl << "*zombieHorde SHUTTING DOWN...*" << std::endl;
	return ;
}

void    Data::welcome(void)
{
    std::cout << "*WELCOME TO MY ZOMBIE HORDE CREATOR*" << std::endl;
    return ;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		Data	d;
		int	count = argc - 1;
		int	i = 0;
  		Zombie  *horde;

		d.welcome();
		while (i < count)
		{
	  		d.data_name[i] = argv[i + 1];
			i++;
		}
  		horde = d.zombieHorde(count, "name");
  		delete []horde;
	}
	else
		std::cout << "PLS type name for your Horde" << std::endl << "Ex: *name* + *name* + *name* ..." << std::endl;	
  return (0);
}
