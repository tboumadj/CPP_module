/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:40:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/11 16:31:00 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Intern
{
  public :
    Intern();
    Intern(const std::string str);
    ~Intern();
    Intern(const Intern &co);
    Intern &operator=(const Intern &co);
    //G&S
    //
    //Method
    Form  makePresident();
    Form  makeRobot();
    Form  makeShrubbery();
    Form  makeForm(const std::string formname_, const std::string target_);
  private :
  };

#endif
