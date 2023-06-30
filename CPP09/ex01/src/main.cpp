/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:00:57 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:01:15 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int calcul_rpn(std::string data)
{
  std::stack<int> stk;

  for(std::string::const_iterator it = data.begin(); it != data.end(); ++it)
  {
    char c = *it;
    if(std::isdigit(c))
    {
      stk.push(c - 48);
      if (stk.size() > 2)
        {
          std::cerr << "error notation3" << std::endl;
          exit (1);
        }
    }
    else if(!(std::isspace(c)))
    {
      if(stk.size() < 2)
      {
        std::cerr << "error notation1" << std::endl;
        exit (1);
      }
      int a = stk.top();
      //std::cout << "a: " << a << std::endl;
      stk.pop();
      int b = stk.top();
      stk.pop();
      //std::cout << "b: " << b << std::endl;

      switch(c)
      {
        case '+':
          stk.push(b + a);
          break;
        case '-':
          stk.push(b - a);
          break;
        case '/':
          stk.push(b / a);
          break;
        case '*':
          stk.push(b * a);
          break;
        defautlt:
          std::cerr << "error operator" << std::endl;
          exit(1);
      }
    //std::cout << "size: " << stk.size() << std::endl;
    if(stk.size() != 1)
    {
      std::cerr << "error notation2" << std::endl;
      exit (1);
    }
  }
  }
  int res = stk.top();
  if (stk.size() != 1)
  {
    std::cerr << "error notation4" << std::endl;
    exit(1);
  }
  return (res);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "too low argument..." << std::endl;
    return (0);
  }
  int res = calcul_rpn(argv[1]);
  std::cout << res << std::endl;
  return (0);
}
