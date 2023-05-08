/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 15:36:19 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyForm", 145, 137), _target("Default")
{
  std::cout << "*Default constructor Shrubbery called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string str): Form("ShrubberyForm", 147, 137), _target(str)
{
  std::cout << "*Constructor Shrubbery for [" << this->getTarget() << "] (TargetFile) called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "*Destructor of Shrubbery with [" << this->getTarget() << "] (TargetFile) called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &co): Form("ShrubberyForm", 147, 137)
{
  *this = co;
  return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//G&S
const   std::string ShrubberyCreationForm::getTarget()const
{
  return (this->_target);
}

//Method

void  ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
  //check grade and create file with _target name
  std::cout << "TREE" << std::endl;
  return ;
}
