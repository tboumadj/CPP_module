/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:57:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/02/28 10:42:09 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string str)
{
    Zombie *tmp;
    tmp = new Zombie;
    tmp->name = str;
    return (tmp);
}

Zombie*		zombieHorde(int N, std::string name)
{
	Zombie *horde[N];
	int	i;
	
	while (i < N)
	{
		name = data_name[i];
		horde[i] = newZombie(name);
    horde[i]->annonce();
		i++;
	}
	return (*horde);
}

/*
Zombie*		zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int	i;
	
	while (i < N)
	{
		name = data_name[i];
		horde = newZombie(name);
    horde->annonce();
		i++;
	}
	return (horde);
}
*/
