/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:56:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/08 12:11:12 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(): _name("Default"), _gradesign(150), _gradexec(150)
{
  std::cout << "*Default constructor Form [" << this->_name << "] called!*" << std::endl;
  std::cout << "grade to sign [" << this->_gradesign << "] " << std::endl;
  std::cout << "grade to exec [" << this->_gradexec << "] " << std::endl;
  return ;
}

Form::Form(std::string str, int sign, int exec): _name(str), _gradesign(sign), _gradexec(exec)
{
  std::cout << "*Constructor Form [" << this->_name << "] called!*" << std::endl;
  std::cout << "grade to signe [" << this->_gradesign << "] " << std::endl;
  std::cout << "grade to exec [" << this->_gradexec << "] " << std::endl;
  return ;
}

Form::~Form()
{
  std::cout << "*Destructor Form called!*" << std::endl;
  return ;
}

Form::Form(const Form &co)
{
  *this = co;
  return ;
}

Form &Form::operator=(const Form &co)
{
  this->_name = co._name;
  this->_gradesign = co._gradesign;
  this->_gradexec = co._gradexec;
  return (*this);
}
