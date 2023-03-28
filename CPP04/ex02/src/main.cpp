/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:56:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/28 07:38:07 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
  //TEST
  const Animal *a;
  const Animal *b = new Dog("B");
  const Animal *c = new Cat("C");
  //TEST2
  delete b;
  delete c;
  return (0);
}
