/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:58:30 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 13:52:35 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Easyfind.hpp"

int main()
{
//-------------------ARRAY---------------------------
  std::array<int, 5> container = {1, 3, 5, 7, 9};
  std::cout << "-------Array Container-----------" << std::endl;
  easyfind(container, 3);
  std::cout << std::endl;
//------------------VECTOR-------------------------------
  std::vector<int> container2;
  container2.push_back(1);
  container2.push_back(5);
  container2.push_back(7);
  std::cout << "---------Vector container-----------" << std::endl;
  easyfind(container2, 7);
  std::cout << std::endl;
//-----------------LIST----------------------------------
  std::list<int> container3;
  container3.push_back(1);
  container3.push_back(5);
  container3.push_back(7);
  std::cout << "----------List container-----------" << std::endl;
  easyfind(container3, 7);
  std::cout << std::endl;

  return (0);
}
