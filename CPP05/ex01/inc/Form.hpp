/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:44:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/09 12:26:48 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
public :
    Form();
    Form(std::string str, int sign, int exec);
    ~Form();
    Form(const Form &co);
    Form &operator=(const Form &co);
    //Surcharge
    friend std::ostream &operator<<(std::ostream &os, Form *n);
    //G&S
    std::string getName();
    int         getGradeSign();
    int         getGradeXec();
    //Method
    void  signForm(Bureaucrat &b);
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

private :
    std::string       _name;
    size_t            _gradesign;
    size_t            _gradexec;
    bool              _signed;
};

#endif
