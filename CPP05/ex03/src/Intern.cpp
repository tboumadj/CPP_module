/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:44:25 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/11 14:41:44 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern()
{
  std::cout << "*Default constructor Intern called!*" << std::endl;
  return ;
}

Intern::Intern(const std::string str): _target(str)
{
  std::cout << "*Constructor of intern [" << //get name//
  std::endl;
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
//Form makeForm(const std::string formname_, const std::string target_)
//{
//  return ;
//}
