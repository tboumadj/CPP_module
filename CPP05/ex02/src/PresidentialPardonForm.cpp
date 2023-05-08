/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:56:03 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 13:24:23 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
  std::cout << "*Default constructor Presidential called!*" << std::endl;
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string str)
{
  std::cout << "*Constructor of Presidential called!*" << std::endl;
  return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "*Destructor of Presidential called!*" << std::endl;
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &co)
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

//Method
