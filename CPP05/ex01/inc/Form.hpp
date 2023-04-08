/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:44:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/08 12:06:13 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
#include <sys/_types/_size_t.h>

class Form
{
public :
    Form();
    Form(std::string str, int sign, int exec);
    ~Form();
    Form(const Form &co);
    Form &operator=(const Form &co);

private :
    std::string const _name;
    size_t            _gradesign;
    size_t            _gradexec;
};

#endif
