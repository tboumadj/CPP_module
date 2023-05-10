/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 15:47:39 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyForm", 72, 45), _target("Default")
{
  std::cout << "*Default constructor Robotomy called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string str): Form("RobotomyForm", 72, 45), _target(str)
{
  std::cout << "*Constructor of Robotomy for [" << this->getTarget() << "] called!*" << std::endl;
  return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "*Destructor of Robotomy with [" << this->getTarget() << "] called!*" << std::endl;
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &co): Form("RobotomyForm", 72, 45)
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
  if (this->_signed != true || this->_gradexec < executor.getGrade())
  {
    throw GradeTooLowException();
  }
  else
  {
    std::srand(time(NULL));
    unsigned int random_int = rand() % 2 + 1;
    std::cout << "random int is " << random_int << std::endl;
    if (random_int == 2)
      std::cout << "Drill making noise *BBRrrrrrrrr BBBrrrrrrrr* the target [" << 
      this->getTarget() << "] has been robotomysed!" << std::endl;
    else
      std::cout << this->getTarget() << " failed drill .." << std::endl;
  }
}

