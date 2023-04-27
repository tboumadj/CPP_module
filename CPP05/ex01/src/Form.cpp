/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:56:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/27 13:35:26 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(): _name("Default"), _gradesign(150), _gradexec(150), _signed(false)
{
  std::cout << "*Default constructor Form [" << this->_name << "] called!*" << std::endl;
  std::cout << "grade to sign [" << this->_gradesign << "] " << std::endl;
  std::cout << "grade to exec [" << this->_gradexec << "] " << std::endl;
  return ;
}

Form::Form(std::string str, int sign, int exec): _name(str), _gradesign(sign), _gradexec(exec), _signed(false)
{
  std::cout << "*Constructor Form [" << this->_name << "] called!*" << std::endl;
  std::cout << "grade to signe [" << this->_gradesign << "] " << std::endl;
  std::cout << "grade to exec [" << this->_gradexec << "] " << std::endl;
  size_t i = this->getGradeSign();
  size_t j = this->getGradeXec();
  if (i > 150 || j > 150)
    throw(Form::GradeTooLowException());
  else if (i < 1 || j < 1)
    throw(Form::GradeTooHighException());
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

//Surcharge

std::ostream &operator<<(std::ostream &os, Form *n)
{
  os << n->getName() << ", signed grade [" << n->getGradeSign() << "], " <<
  "exec grade [" << n->getGradeXec() << "], " <<
  //"is signed [" << n->getsigned() << "]" << std::endl;
  std::endl;
  return (os);
}

//Getter//Setter

const std::string Form::getName()const
{
  return (this->_name);
}

size_t Form::getGradeSign()const
{
  return (this->_gradesign);
}

size_t Form::getGradeXec()const
{
  return (this->_gradexec);
}

//Exception
  
const char *Form::GradeTooLowException::what() const throw()
{
  return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
  return ("Grade is too High!");
}

//Method

//void  Form::signForm(Bureaucrat &b)
//{
//  std::cout << b.getName() << " signed " << this->_name << std::endl;
//  std::cout << b.getName() << " couldn't sign " << this->_name << " because <reason> " << std::endl;
//  return ;
//}
