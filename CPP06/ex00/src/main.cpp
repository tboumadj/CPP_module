/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:12:43 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/29 16:06:28 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Literal.hpp"

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    ScalarConverter *a;
    std::cout << "GO to convert" << std::endl;
    try
    {
      a = new ScalarConverter(argv[1]);
      delete (a);
    }
    catch (ScalarConverter::ErrorExcept &e)
    {
      std::cout << "error exception : " << e.what() << std::endl;
    }
  }
  else
  {
    std::cout << "ARG Missing ..." << std::endl;
  }
  return (0);
}

//UTILS
//atof
