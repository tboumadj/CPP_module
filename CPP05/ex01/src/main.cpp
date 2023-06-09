/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/05 19:14:37 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
  Bureaucrat *a;
  Form *b;
  try
  {
    a = new Bureaucrat("truc", 51);
    b = new Form("machin", 50, 150);
    a->signForm(*b);
    a->Increment();
    std::cout << a;
    a->signForm(*b);
    a->Increment();
    std::cout << a;
    a->signForm(*b);
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << "error execption1 " << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
    std::cout << "error execption2 " << e.what() << std::endl;
  }
  catch (Form::GradeTooHighException &e)
  {
    std::cout << "error exception3 " << e.what() << std::endl;
  }
  catch (Form::GradeTooLowException &e)
  {
    std::cout << "error exception4 " << e.what() << std::endl;
  }
  delete (a);
  delete (b);
  return (0);
}
