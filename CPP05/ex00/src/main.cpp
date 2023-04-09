/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/09 09:45:59 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
  //-------------------
  Bureaucrat *a = new Bureaucrat;
  Bureaucrat *b = new Bureaucrat("Machin", 42);
  Bureaucrat *c = new Bureaucrat("Truc", 151);
  //Bureaucrat c("Truc", 151);
  //-----------------
  a->Decrement();

  std::cout << a;
  std::cout << b;
  std::cout << c;

  delete a;
  delete b;
  //-------------------
  return (0);
}
