/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:56 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/09 09:47:51 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
  std::cout << "*Default constructor Bureaucrat [" << this->_name << "] and graded [" << this->_grade << "] called!*" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(std::string str, int nbr): _name(str)
{
  std::cout << "*Constructor Bureaucrat [" << this->_name << "] and graded [" << nbr << "] called!*" << std::endl;
  if (nbr < 1)
  {
    try
    {
     this->setGrade(nbr);
    }
    catch(GradeTooHighException &e)
    {
      std::cout << "Error instanciate grade! " << e.what() << std::endl;
      delete (this);
    }
  }
  else
  {
    try
    {
      this->setGrade(nbr);
    }
    catch(GradeTooLowException &e)
    {
      std::cout << "Error instanciate garde ! " << e.what() << std::endl;
      delete (this);
    }
  }
  return ;
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "*Destructor Bureaucrat called!*" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &co)
{
  *this = co;
  return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &co)
{
  this->_name = co._name;
  this->_grade = co._grade;
  return (*this);
}

//Getter//Setter-------------------

std::string  Bureaucrat::getName()
{
  return (this->_name);
}

int Bureaucrat::getGrade()
{
  return (this->_grade);
}

void Bureaucrat::setGrade(int nbr)
{
  if (nbr > 150)
    throw GradeTooLowException();
  else if (nbr < 1)
    throw GradeTooHighException();
  else
    this->_grade = nbr;
}

//Surcharge-----------------------

std::ostream &operator<<(std::ostream &os, Bureaucrat *n)
{
  if (n->getGrade() > 0)
  {
    os << n->getName() << ", bureaucrat grade " << n->getGrade() << "." << std::endl;
    return (os);
  }
  return (os);
}

//Exception----------------------

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Grade is too low!");
}

//member Fonc

void  Bureaucrat::Increment()
{
  try
  {
    this->setGrade(this->_grade - 1);
  }
  catch(GradeTooHighException &e)
  {
    std::cout << "try to Increment but " << e.what() << std::endl;
  }
  return ;
}

void  Bureaucrat::Decrement()
{
  try
  {
    this->setGrade(this->_grade + 1);
  }
  catch(GradeTooLowException &e)
  {
    std::cout << "try to Decrement but " << e.what() << std::endl;
  }
  return ;
}
