/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:44:25 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/13 15:36:41 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern()
{
  std::cout << "*Default constructor Intern called!*" << std::endl;
  return ;
}

Intern::Intern(const std::string str)
{
  std::cout << "*Constructor of intern called!*" << std::endl;
    return ;
}

Intern::~Intern()
{
  std::cout << "*Destructor of Intern called!*" << std::endl;
  return ;
}

Intern::Intern(const Intern &co)
{
  *this = co;
  return ;
}

Intern &Intern::operator=(const Intern &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//G&S
//
//Method

static Form  *makePresident(const std::string target)
{
  return (new PresidentialPardonForm(target));
}

static Form  *makeRobot(const std::string target)
{
  return (new RobotomyRequestForm(target));
}

static Form  *makeShrubbery(const std::string target)
{
  return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string formname_, const std::string target_)
{
  std::string arg[3] ;
  Form *(*f[3])(const std::string target) ;


    int i = 0;
    arg[0] = "PresidentialForm";
    arg[1] = "RobotomyForm";
    arg[2] = "ShrubberyForm";

    f[0] = &makePresident;
    f[1] = &makeRobot;
    f[2] = &makeShrubbery;

    while (i < 3)
  {
    if (arg[i] == formname_)
        return (f[i](target_));
    i++;
  }
  return (NULL);
}
