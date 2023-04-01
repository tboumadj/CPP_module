/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:56 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/01 10:20:02 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  std::cout << "*Default constructor Bureaucrat called!*" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(std::string str, int num): _name(str), _grade(num)
{
  std::cout << "*Constructor Bureaucrat [" << this->_name << "] and graded [" << this->_grade << "] called!*" << std::endl;
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
