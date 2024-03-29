/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:56:03 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 15:48:02 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialForm", 25, 5), _target("Default")
{
  std::cout << "*Default constructor Presidential called!*" << std::endl;
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string str): Form("PresidentialForm", 25, 5), _target(str)
{
  std::cout << "*Constructor of Presidential for [" << this->getTarget() << "] target called!*" << std::endl;
  return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "*Destructor of Presidential with [" << this->getTarget() << "] called!*" << std::endl;
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &co): Form("PresidentialForm", 25, 5)
{
  *this = co;
  return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//G&S

const std::string PresidentialPardonForm::getTarget()const
{
  return (this->_target);
}

//Method

void  PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
  if (this->_signed != true || this->_gradexec < executor.getGrade())
  {
    throw GradeTooLowException();
  }
  else
  {
    std::cout << this->getTarget() << " has been forgived by Zaphod Beelbebrox." << std::endl;
  }
  return ;
}
