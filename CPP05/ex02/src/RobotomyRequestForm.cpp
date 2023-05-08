/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 15:34:19 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("FormRobotomy", 72, 5), _target("Default")
{
  std::cout << "*Default constructor Robotomy called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string str): Form("FormRobotomy", 72, 5), _target(str)
{
  std::cout << "*Constructor of Robotomy for [" << this->getTarget() << "] called!*" << std::endl;
  return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "*Destructor of Robotomy with [" << this->getTarget() << "] called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &co): Form("FormRobotomy", 72, 5)
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

//G&S
const std::string RobotomyRequestForm::getTarget()const
{
  return (this->_target);
}

//Method

void RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
  //check grade & 1 chance /2
  std::cout << this->getTarget() << "BBRrrrrrrrr BBBrrrrrrrr" << std::endl;
}
