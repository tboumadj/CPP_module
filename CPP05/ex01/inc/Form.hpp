/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:44:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/02 16:20:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>

class Form
{
public :
    Form();
    Form(const std::string str, int sign, int exec);
    ~Form();
    Form(const Form &co);
    Form &operator=(const Form &co);
    //Surcharge
    friend std::ostream &operator<<(std::ostream &os, Form *n);
    //G&S
    const std::string getName()const;
    size_t            getGradeSign()const;
    size_t            getGradeXec()const;
    //Method
    //void beSigned();
    //void  signForm(Bureaucrat &b);
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
    const std::string   _name;
    const size_t        _gradesign;
    const size_t        _gradexec;
    bool                _signed;
};

#endif
