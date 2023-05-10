/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 16:28:26 by tboumadj         ###   ########.fr       */
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
  if (this->_signed != true || this->_gradexec < executor.getGrade())
  {
    throw GradeTooLowException();
  }
  else
  {
    std::ofstream outf; 
    outf.open(this->getTarget() + ("_shrubbery"));
    if(outf.fail())
    {
      std::cout << "Error with creation file ..." << std::endl;
      return ;
    }
    std::cout << "[" << this->_target << "]"<< " making ASCII TREE ..." << std::endl;
      outf <<
      "$$$$$$$$$$$$$$^$$$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$'   $$$$$$$$$$$$$$$" << std::endl << 
      "$$$$$$$$$$$  d$  $$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$  d$$$  *$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$' d$$$$$  *$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$' d$$$$$$$. '$$$$$$$$$$" << std::endl <<
      "$$$$$$$' J$$$$$$$$$c '$$$$$$$$$" << std::endl <<
      "$$$$$$% z$$$$$$$$$$$c ^$$$$$$$$" << std::endl <<
      "$$$$$' z$$$$$$$$$$$$$b ^$$$$$$$" << std::endl <<
      "$$$$' 4$$$$$$$$$$$$$$$b  $$$$$$" << std::endl << 
      "$$$P        $$$$$$       4$$$$$" << std::endl <<
      "$$$$aaaaar .$$$$$$r  ....$$$$$$" << std::endl <<
      "$$$$$$$$' .$$$$$$$$c '$$$$$$$$$" << std::endl <<
      "$$$$$$$' 4$$$$$$$$$$c ^$$$$$$""" << std::endl <<
      "$$$$$$% z$$$$$$$$$$$$L ^$$$$$$$" << std::endl <<
      "$$$$$' z$$$$$$$$$$$$$$b ^$$$$$$" << std::endl <<
      "$$$$' d$$$$$$$$$$$$$$$$b  $$$$$" << std::endl <<
      "$$$  d$$$$$$$$$$$$$$$$$$$  $$$$" << std::endl <<
      "$$         $$$$$$$$$        $$$" << std::endl <<
      "$$c...... .$$$$$$$$$  eeeeee$$F" << std::endl <<
      "$$$$$$$$  $$$$$$$$$$L *$$$$$$$$" << std::endl <<
      "$$$$$$$  $$$$$$$$$$$$  $$$$$$$$" << std::endl <<
      "$$$$$$' $$$$$$$$$$$$$$ '$$$$$$$" << std::endl <<
      "$$$$$' d$$$$$$$$$$$$$$r *$$$$$$" << std::endl <<
      "$$$$' z$$$$$$$$$$$$$$$$  $$$$$$" << std::endl <<
      "$$$P .$$$$$$$$$$$$$$$$$b '$$$$$" << std::endl <<
      "$$$  $$$$$$$$$$$$$$$$$$$. $$$$$" << std::endl <<
      "$$                         $$$F" << std::endl <<
      "$b                         $$$$" << std::endl <<
      "$$$$$$$$$$$$$F  4$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$F  4$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$F  4$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$F  4$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$$ze$$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl <<
      "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
      outf.close();
  }
  return ;
}
