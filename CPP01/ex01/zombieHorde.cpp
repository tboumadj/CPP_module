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

Zombie*		Data::zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	int	i = 0;
	
	while (i < N)
	{
		name = this->data_name[i];
    horde[i].setName(name);
    horde[i].annonce();
		i++;
    //name.clear();
	}
	return (horde);
}
