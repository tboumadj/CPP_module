/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 16:12:24 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
  Bureaucrat *a;
  Bureaucrat *a2;
  Bureaucrat *a3;
  PresidentialPardonForm *b;
  RobotomyRequestForm *c;
  ShrubberyCreationForm *e;
  try
  {
    a = new Bureaucrat("truc", 3);
    a2 = new Bureaucrat("SuperTruc", 38);
    a3 = new Bureaucrat("MegaTruc", 99);
    b = new PresidentialPardonForm("John Snow");
    c = new RobotomyRequestForm("R2D2");
    e = new ShrubberyCreationForm("Sapin");
    a->signForm(*b);
    a2->signForm(*c);
    a3->signForm(*e);
    a->executeForm(*b);
    a2->executeForm(*c);
    a3->executeForm(*e);
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
