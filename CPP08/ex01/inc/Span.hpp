/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:24:35 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/14 17:47:23 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
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
    void addIt(unsigned int tot);
    unsigned int shortestSpan();
    unsigned int longestSpan();
  //Test
    void printCnt();
    class Errorexecpt : public std::exception
    {
      public:
        const char *what() const throw();
    };
    class Nbrexcept : public std::exception
    {
      public:
        const char *what() const throw();
    };
  };
#endif
