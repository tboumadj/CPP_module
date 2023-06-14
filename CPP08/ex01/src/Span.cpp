/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:25:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/14 17:53:25 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(): _n(0), _cnt(0), _count(0)
{
  std::cout << "*Default constructor of Span called!*" << std::endl;
  return ;
}

Span::Span(unsigned int n): _n(n), _cnt(0), _count(0)
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
static bool compare(int a, int b)
{
  return (a < b);
}

void  Span::addNumber(unsigned int nbr)
{
  if (this->_count < this->_n)
  {
    //std::vector<int>::size_type sz;
    //sz = this->_cnt.capacity();
    this->_cnt.push_back(nbr);
    //if (sz!=this->_cnt.capacity())
    //{
    // sz = this->_cnt.capacity();
    //  std::cout << "capacity changed: " << sz << std::endl;
    //}
    std::cout << "[" << nbr << "] added to container!" << std::endl;
    this->_count += 1;
  }
  else
    throw Nbrexcept();
  return ;
}

void Span::addIt(unsigned int tot)
{
  if (this->_n > 0)
  {
    //this->_cnt.reserve(tot);
    //std::vector<int>::iterator itBegin = this->_cnt.begin();
    //std::vector<int>::iterator itEnd = this->_cnt.end();
    //for (std::vector<int>::iterator it = itBegin; it != itEnd; ++it)
    while (this->_count < tot && this->_count < this->_n)
    {
      this->_cnt.push_back(this->_count+1);
      this->_count += 1;
    }
  }
  else
    throw Errorexecpt();
  return ;
}

unsigned int Span::longestSpan()
{
  int i = -1;
  int s = -1;
  int b = -1;
  
  if (this->_count <= 1) //this->_cnt == NULL)
    throw Errorexecpt();
  while (++i < this->_count)
  {
    if (s < 0 || s > this->_cnt[i])
      s = this->_cnt[i];
  }
  i = -1;
  while (++i < this->_count)
  {
    if (b < 0 || b < this->_cnt[i])
      b = this->_cnt[i];
  }
  unsigned int result = b - s;
  return (result);
}

unsigned int Span::shortestSpan()
{
  int i =               -1;
  int result = -1;
  
  if (this->_count <= 1)
    throw Errorexecpt();
  std::sort(this->_cnt.begin(), this->_cnt.end(), compare);
  while(++i < (this->_count - 1))
  {
    if (result == -1 || ((this->_cnt[i+1] - this->_cnt[i]) < result))
      result = (this->_cnt[i+1] - this->_cnt[i]);
  }

  return (result);
}

//Exception
const char *Span::Errorexecpt::what() const throw()
{
  return ("Error Array void or just 1 in case..");
}

const char *Span::Nbrexcept::what() const throw()
{
  return ("Max nbr in container...");
}
//TEST

void Span::printCnt()
{
  if (this->_count == 0)
    return ;
  int i = -1;
  while (++i < this->_count)
    std::cout << this->_cnt[i] << " , ";
  std::cout << std::endl;
  return ;
}
