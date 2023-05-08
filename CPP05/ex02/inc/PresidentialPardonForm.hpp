/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:52:48 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 13:53:47 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form
{
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string str);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &co);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &co);
    //Method

};

#endif
