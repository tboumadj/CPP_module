/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:56:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/22 14:45:12 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
  //Dog a("Clebs");
  //Cat b("Gat");
  
  //a.makeSound();
  //b.makeSound();
  //TEST
  const Animal *meta = new Animal();
  const Animal *j = new Dog("Clebs");
  const Animal *i = new Cat("Gat");
  const WrongAnimal *z =  new WrongCat("Wrong");

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  z->makeSound();
  delete j;
  delete i;
  delete meta;
  delete z;
  return (0);
}
