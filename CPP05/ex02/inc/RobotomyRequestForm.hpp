/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:47:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/06 17:52:39 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>

class RobotomyRequestForm
{
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string str);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &co);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &co);
    //method
    //
};

#endif
