/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:27:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/14 17:52:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

//int main()
//{
//  try
//  {
//    Span sp = Span(5);

//    sp.addNumber(6);
//    sp.addNumber(3);
//    sp.addNumber(17);
//    sp.addNumber(9);
//    sp.addNumber(11);
//    sp.addNumber(12);

  //Print
//    sp.printCnt();
  
  //Test
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;
//  }
//  catch(Span::Errorexecpt &e)
//  {
//    std::cout << e.what() << std::endl;
//  }
//  catch(Span::Nbrexcept &e)
//  {
//    std::cout << e.what() << std::endl;
//  }
//  return (0);
//}

int main()
{
  try
  {
    Span sp = Span(15000);

    sp.addIt(10000);
    sp.printCnt();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch(Span::Errorexecpt &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch(Span::Nbrexcept &e)
  {
    std::cout << e.what() << std::endl;
  }
  return (0);
}
