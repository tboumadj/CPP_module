/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:40:32 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/06 17:47:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <exception>

class ShrubberyCreationForm
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string str);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &co);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &co);
    //Method

  };

#endif
