/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:06:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:06:25 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe()
{
  return ;
}

PmergeMe::~PmergeMe()
{
  return ;
}

PmergeMe::PmergeMe(const PmergeMe &co)
{
  *this = co;
  return ;
}

void PmergeMe::create_list(char **data)
{
  int i = 0;
  while (data[++i])
  {
    int nbr = std::atoi(data[i]);
    std::cout << "nbr_l: " << nbr << std::endl;
    this->n_list.push_back(nbr);
  }
  //-----------VERIF
  std::list<int>::iterator it;
  for(it = this->n_list.begin(); it != this->n_list.end(); ++it)
  {
    std::cout << "list: " << *it << std::endl;
    if (*it <= 0)
    {
      std::cerr << "error" << std::endl;
      return ;
    }
  }
}

void PmergeMe::create_map(char **data)
{
  int i = 0;
  while(data[++i])
  {
    int nbr = std::atoi(data[i]);
    std::cout << "nbr_m: " << nbr << std::endl;
    this->n_map[i] = nbr;
  }

  std::map<int, int>::iterator it;
  for (it = this->n_map.begin(); it != this->n_map.end(); ++it)
  {
    std::cout << "map: " << it->second << std::endl;
    if (it->second < 0)
    {
      std::cout << "error" << std::endl;
      return ;
    }
  }
}
