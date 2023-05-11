/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:44:25 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/11 16:31:42 by tboumadj         ###   ########.fr       */
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

Form  Intern::makePresident()
{
  return (NULL);
}

Form  Intern::makeRobot()
{
  return (NULL);
}

Form  Intern::makeShrubbery()
{
  return (NULL);
}

Form Intern::makeForm(const std::string formname_, const std::string target_)
{
  std::string arg[3];
    Form (Intern::*f[3])(void);

    int i = 0;
    arg[0] = "PresidentialForm";
    arg[1] = "RobotomyForm";
    arg[2] = "ShrubberyForm";

    f[0] = &Intern::makePresident;
    f[1] = &Intern::makeRobot;
    f[2] = &Intern::makeShrubbery;

    while (i < 3)
  {
    if (arg[i] == formname_)
        (this->*f[i]());
    i++;
  }
  return (NULL);
}
