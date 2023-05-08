/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:47:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 15:16:20 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Form;

class RobotomyRequestForm: public Form
{
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string str);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &co);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &co);
    //G&S
    const std::string getTarget()const;
    //Method
    void  execute(Bureaucrat const &executor)const;
  private:
    const std::string _target;
};

#endif
