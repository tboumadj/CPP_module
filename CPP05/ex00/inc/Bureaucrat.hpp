/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:46 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/01 10:15:09 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <ostream>
# include <iostream>
# include <string>

class Bureaucrat
{
public :
  Bureaucrat();
  Bureaucrat(const std::string str, int num);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &co);
  Bureaucrat &operator=(const Bureaucrat &co);

private:
  std::string _name;
  int         _grade;
};

#endif
