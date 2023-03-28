/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:56:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 07:55:09 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
  //TEST
  const Animal *meta = new Animal();
  const Animal *j = new Dog("Dog");
  const Animal *i = new Cat("Cat");
  const WrongAnimal *z =  new WrongCat();
  const WrongAnimal *y = new WrongCat("Truc");

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  z->makeSound();
  y->makeSound();
  delete j;
  delete i;
  delete meta;
  delete z;
  delete y;
  return (0);
}
