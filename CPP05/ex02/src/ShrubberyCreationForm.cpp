/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:55:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/06 18:00:35 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
  std::cout << "*Default constructor Shrubbery called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string str)
{
  std::cout << "*Constructor Shrubbery called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "*Destructor of Shrubbery called!*" << std::endl;
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &co)
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

//Method
