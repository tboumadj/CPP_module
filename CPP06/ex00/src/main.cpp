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
    Literal *a;
    std::cout << "GO to convert" << std::endl;
    try
    {
      a = new Literal(argv[1]);
    }
      catch(...)
    {
      return (-1);
    }
    //catch (Literal::ErrorExcept &e)
    //{
    //  std::cout << "error exception " << e.what() << std::endl;
    //}
    delete (a);
  }
  else
  {
    std::cout << "Hello Test!" << std::endl;
  }
  return (0);
}

//UTILS
//atof
