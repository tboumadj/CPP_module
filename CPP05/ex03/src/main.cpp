/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 17:07:13 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

//int main()
//{
  //-------------------
// Bureaucrat *a = new Bureaucrat("Truc", 52);
// Form *b = new Form("Machin", 45, 151);
  //-----------------
//    std::cout << a;
//    std::cout << b;
  //-------------------
//    a->Decrement();
//    a->signForm(*b);
  //--------------------
//    delete a;
//    delete b;
  //-------------------
//  return (0);
//}

int main()
{
  Bureaucrat *a;
  
  try
  {
    a = new Bureaucrat("truc", 1);
  
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

  return (0);
}
