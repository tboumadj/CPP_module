/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:00:45 by tboumadj          #+#    #+#             */
/*   Updated: 2023/07/04 17:36:01 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

RPN::RPN()
{
  return ;
}

RPN::~RPN()
{
  return ;
}

RPN::RPN(const RPN &co)
{
  *this = co;
  return ;
}

//------------Method

int RPN::calcul_rpn(std::string data)
{
  for(std::string::const_iterator it = data.begin(); it != data.end(); ++it)
  {
    char c = *it;
    if(std::isdigit(c))
    {
      this->stk.push(c - 48);
      //if (this->stk.size() > 2)
      //  {
      //    std::cerr << "error notation3" << std::endl;
      //    exit (1);
      // }
    }
    else if(!(std::isspace(c)))
    {
      if(this->stk.size() < 2)
      {
        std::cerr << "error notation1" << std::endl;
        exit (1);
      }
      int a = this->stk.top();
      //std::cout << "a: " << a << std::endl;
      this->stk.pop();
      int b = this->stk.top();
      this->stk.pop();
      //std::cout << "b: " << b << std::endl;

      switch(c)
      {
        case '+':
          this->stk.push(b + a);
          break;
        case '-':
          this->stk.push(b - a);
          break;
        case '/':
          this->stk.push(b / a);
          break;
        case '*':
          this->stk.push(b * a);
          break;
        defautlt:
          std::cerr << "error operator" << std::endl;
          exit(1);
      }
    //std::cout << "size: " << stk.size() << std::endl;
    //if(this->stk.size() != 1)
    //{
    //  std::cerr << "error notation2" << std::endl;
    //  exit (1);
    //}
  }
  }
  int res = this->stk.top();
  if (this->stk.size() != 1)
  {
    std::cerr << "error notation4" << std::endl;
    exit(1);
  }
  return (res);
}



