/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:25:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/13 16:11:47 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(): _n(0), _cnt(0), _count(0)
{
  std::cout << "*Default constructor of Span called!*" << std::endl;
  return ;
}

Span::Span(unsigned int n): _n(n), _cnt(5), _count(0)
{
  std::cout << "*Constructor of Span [" << this->_n << "] valor called!*" << std::endl;
  
  return ;
}

Span::~Span()
{
  std::cout << "*destructor of Span called!*" << std::endl;
  return ;
}

Span::Span(const Span &co)
{
  *this = co;
  return ;
}

//Surcharge
Span &Span::operator=(const Span &co)
{
  if (this != &co)
    *this = co;
  return (*this);
}

//Method

void  Span::addNumber(unsigned int nbr)
{
  try
  {
    //this->_cnt.push_back(nbr);
    if (this->_count < this->_n)
    {
      this->_cnt[this->_count] = nbr;
      std::cout << "[" << nbr << "] added to container!" << std::endl;
      this->_count += 1;
    }
    else
    {
      std::cout << "max nbr in container..." << std::endl;
      return ;
    }
  }
  catch(...)
  {
    std::cout << "Failed to add in container..." << std::endl;
  }
  return ;
}

unsigned int Span::longestSpan()
{
  int i = -1;
  int s = -1;
  int b = -1;
  while (++i < this->_n)
  {
    if (s < 0 || s > this->_cnt[i])
      s = this->_cnt[i];
  }

  i = -1;
  while (++i < this->_n)
  {
    if (b < 0 || b < this->_cnt[i])
      b = this->_cnt[i];
  }
  unsigned int result = b - s;
  return (result);
}

//TEST
void Span::printCnt()
{
  int i = -1;
  while (++i < this->_n)
    std::cout << this->_cnt[i] << " , ";
  std::cout << std::endl;
  return ;
}
