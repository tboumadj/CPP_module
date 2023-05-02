/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/02 17:16:22 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
  //-------------------
  Bureaucrat *a = new Bureaucrat("Truc", 42);
  Form *b = new Form("Machin", 25, 92);
  //-----------------
  //a->Decrement();
  a->signForm(*b);

  std::cout << a;
  std::cout << b;

  delete a;
  delete b;
  //-------------------
  return (0);
}
