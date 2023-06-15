/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:27:19 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 12:41:40 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
  try
  {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(12);

  //Print
    sp.printCnt();
  
  //Test
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
 //--------------One Call----------------------//
  std::cout << "----------------------------ONE CALL-----------------------" << std::endl;
  try
  {
    Span sp2 = Span(15000);

    sp2.addIt(11000);
    sp2.printCnt();
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
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
