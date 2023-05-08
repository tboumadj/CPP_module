/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 13:21:09 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
  std::cout << "*Default constructor Robotomy called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string str)
{
  std::cout << "*Constructor of Robotomy called!*" << std::endl;
  return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "*Destructor of Robotomy called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &co)
{
  *this = co;
  return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//Method
