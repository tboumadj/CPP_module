/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/08 11:39:48 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
  //-------------------
  Bureaucrat *a = new Bureaucrat;
  Bureaucrat *b = new Bureaucrat("Machin", 42);
  //-----------------
  a->Decrement();

  std::cout << a;
  std::cout << b;

  delete a;
  delete b;
  //-------------------
  Bureaucrat c("Truc", 151);
  return (0);
}
