/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:56 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/05 19:23:13 by tboumadj         ###   ########.fr       */
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
  if (nbr < 1)
  {
    throw GradeTooHighException();
  }
  else if (nbr > 150)
  {
  throw GradeTooLowException();
  }
  else
  {
    this->setGrade(nbr);
    std::cout << "*Constructor Bureaucrat [" << this->_name << "] and graded [" << this->_grade << "] called!*" << std::endl;
  }
  return ;
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "*Destructor of " << this->_name << " Bureaucrat called!*" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &co)
{
  *this = co;
  return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//Getter//Setter-------------------

const std::string  Bureaucrat::getName()const
{
  return (this->_name);
}

size_t Bureaucrat::getGrade()const
{
  return (this->_grade);
}

void Bureaucrat::setGrade(int nbr)
{
    this->_grade = nbr;
}

//Surcharge-----------------------

std::ostream &operator<<(std::ostream &os, Bureaucrat *n)
{
  if (n->getGrade() > 0 && n->getGrade() < 151)
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
  if (this->_grade - 1 < 1)
  {
    std::cout << "try to Increment but " << std::endl;
    throw GradeTooHighException();
  }
  else
  {
    this->setGrade(this->_grade - 1);
    std::cout << "increment of " << this->_name << " done!" << std::endl;
  }
  return ;
}

void  Bureaucrat::Decrement()
{
  if (this->_grade + 1 > 150)
  {
    std::cout << "try to Decrement but " << std::endl;
    throw GradeTooLowException();
  }
  else
  {
    this->setGrade(this->_grade + 1);
    std::cout << "decrement of " << this->_name << " done!" << std::endl;
  }
  return ;
}
