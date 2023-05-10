/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:40:32 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/10 16:17:24 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "Form.hpp"

class Form;

class ShrubberyCreationForm: public Form
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string str);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &co);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &co);
    //G&S
    const std::string getTarget()const;
    //Method
    void  execute(Bureaucrat const &executor)const;
  private:
    const std::string _target;
  };

#endif
