/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:44:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/08 14:13:05 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#ifndef FORM_HPP
# define FORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public :
    Form();
    Form(const std::string str, int sign, int exec);
    virtual ~Form();
    Form(const Form &co);
    Form &operator=(const Form &co);
    //Surcharge
    friend std::ostream &operator<<(std::ostream &os, Form *n);
    //G&S
    virtual const std::string getName()const;
    virtual size_t            getGradeSign()const;
    virtual size_t            getGradeXec()const;
    //Method
    virtual bool              beSigned(Bureaucrat *b)const;
    //Execption
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

protected :
    const std::string   _name;
    const size_t        _gradesign;
    const size_t        _gradexec;
    bool                _signed;
};

#endif
