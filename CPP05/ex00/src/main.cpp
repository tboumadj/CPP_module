/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/05 19:21:00 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
  Bureaucrat *a;
  Bureaucrat *b;
  Bureaucrat *c;
  
  try
  {
    a = new Bureaucrat;
    b = new Bureaucrat("Machin", 2);
    c = new Bureaucrat("Truc", 150);
    //-----------
    b->Increment();
    std::cout << a;
    std::cout << b;
    std::cout << c;
    b->Increment();
    std::cout << a;
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << "error [execpt1] " << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << "error [execpt2] " << e.what() << std::endl;
  }
  delete (a);
  delete (b);
  delete (c);
  return (0);
}
