/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:24:35 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/13 16:11:07 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <ostream>
# include <iostream>
# include <vector>

class Span
{
  private:
    unsigned int _n;
    unsigned int _count;
    std::vector<int> _cnt;
  public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span &co);
  //Surcharge
    Span &operator=(const Span &co);
  //Method
    void addNumber(unsigned int nbr);
    //unsigned int shortestSpan();
    unsigned int longestSpan();
  //Test
    void printCnt();
  };
#endif
