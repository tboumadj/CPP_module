/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:56:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 16:43:26 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
  //TEST
  const Animal *a;
  const Animal *b = new Dog();
  //TEST2
  //int i = 0;
  //const Animal* j[20];
  //std::string str = "Clebs";
  //std::string str2 = "Gat";

  //while (i <= 20)
  //{
  //  while (i <= 10)
  // {
  //    j[i] = new Dog(str);
  //    std::cout << j[i]->getType() << "[" << i << "]" << std::endl;
  //    std::cout << i; 
  //    j[i]->makeSound();
  //    i++;
  //  }
  //  j[i] = new Cat(str2);
  //  std::cout << j[i]->getType() << "[" << i << "]" << std::endl;
  //  std::cout << i;
  //  j[i]->makeSound();
  //  i++;
  //}
  //i--;
  //while (i > 0)
  //{
  //  delete j[i];
  //  i--;
  //}
  return (0);
}
