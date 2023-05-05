/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:46 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/05 19:08:02 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include <sys/_types/_size_t.h>
# include "Form.hpp" 

class Form;

class Bureaucrat
{
public :
  Bureaucrat();
  Bureaucrat(const std::string str, int num);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &co);
  Bureaucrat &operator=(const Bureaucrat &co);
  //Surchage
  friend std::ostream &operator<<(std::ostream &os, Bureaucrat *n);
  //G&S
  const std::string getName()const;
  size_t            getGrade()const;
  void              setGrade(int nbr);
  //Method
  void          Increment();
  void          Decrement();
  void          signForm(Form &f);
  //Exception
  class GradeTooHighException : public std::exception
  {
    public:
      const char *what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
    public:
      const char *what() const throw();
  };

private :
  const std::string   _name;
  size_t              _grade;
};

#endif
