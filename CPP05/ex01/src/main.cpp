/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/09 11:47:44 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

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
  return (0);
}
