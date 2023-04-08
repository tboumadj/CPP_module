/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:46 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/08 11:44:54 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include <sys/_types/_size_t.h>

class Bureaucrat
{
public :
  Bureaucrat();
  Bureaucrat(const std::string str, int num);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &co);
  Bureaucrat &operator=(const Bureaucrat &co);

  friend std::ostream &operator<<(std::ostream &os, Bureaucrat *n);

  std::string   getName();
  int           getGrade();
  void          setGrade(int nbr);

  void          Increment();
  void          Decrement();

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
  std::string _name;
  size_t      _grade;
};

#endif
