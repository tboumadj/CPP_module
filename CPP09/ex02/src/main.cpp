/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:06:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:06:42 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergMe.hpp"

void create_list(char **data)
{
  int i = 0;
  std::list<int> n_list;
  while (data[++i])
  {
    int nbr = std::atoi(data[i]);
    std::cout << "nbr: " << nbr << std::endl;
    n_list.push_back(nbr);
  }
  //-----------VERIF
  std::list<int>::iterator it;
  for(it = n_list.begin(); it != n_list.end(); ++it)
  {
    std::cout << "list: " << *it << std::endl;
    if (*it <= 0)
    {
      std::cerr << "error" << std::endl;
      return ;
    }
  }
}

void create_map(char **data)
{

    std::map<int, int> myMap;
    myMap[1] = 2;
    myMap[2] = 4;
    myMap[3] = -6;
    myMap[4] = 8;
    myMap[5] = 10;

    std::map<int, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it)
  {
    std::cout << "map: " << it->second << std::endl;
    if (it->second < 0)
    {
      std::cout << "error" << std::endl;
      return ;
    }
    }
}

int main(int argc, char **argv)
{
  if (argc <= 2)
  {
    std::cerr << "error too low arg ..." << std::endl;
    return (0);
  }
  else
  {
    create_list(argv);
    create_map(argv);
  }
  return (0);
}
