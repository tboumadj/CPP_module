/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:56:39 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/05 18:10:17 by tboumadj         ###   ########.fr       */
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
  if (_gradesign < 1 || _gradexec < 1)
  {
    throw GradeTooHighException();
  }
  else if (_gradesign > 150 || _gradexec > 150)
  {
    throw GradeTooLowException();
  }
  else
  {
    std::cout << "*Constructor Form [" << this->_name << "] called! " <<
    "grade to sign is [" << this->_gradesign << "] " <<
    "and grade to exec is [" << this->_gradexec << "]*" << std::endl;
  }
  return ;
}

Form::~Form()
{
  std::cout << "*Destructor of " << this->_name << " Form called!*" << std::endl;
  return ;
}

Form::Form(const Form &co): _gradesign(co._gradesign), _gradexec(co._gradexec)
{
  *this = co;
  return ;
}

Form &Form::operator=(const Form &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//Surcharge

std::ostream &operator<<(std::ostream &os, Form *n)
{
  os << n->getName() << " form, signed grade [" << n->getGradeSign() << "], " <<
  "exec grade [" << n->getGradeXec() << "], " << std::endl;
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

bool  Form::beSigned(Bureaucrat *b)
{
  int grade = b->getGrade();
  if(grade <= this->_gradesign && this->_signed != true)
    this->_signed = true;
  return (_signed);
}

