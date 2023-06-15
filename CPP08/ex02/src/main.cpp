/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:03:32 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 12:37:23 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main()
{
  std::cout << "-----------------------STACK--------------------" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << "top: " << mstack.top() << std::endl;
  mstack.pop();
  std::cout << "size: " << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
//[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
  std::cout << *it << std::endl;
  ++it;
  }
  std::stack<int> s(mstack);

  //-----------------------List---------------------------------
  std::cout << "--------------------------LIST-----------------------" << std::endl;
  MutantStack2<int> mstack2;
  mstack2.push_back(5);
  mstack2.push_back(17);
  std::cout << "top: " << mstack2.back() << std::endl;
  mstack2.pop_back();
  std::cout << "size: " << mstack2.size() << std::endl;
  mstack2.push_back(3);
  mstack2.push_back(5);
  mstack2.push_back(737);
//[...]
  mstack2.push_back(0);
  MutantStack2<int>::iterator it2 = mstack2.begin();
  MutantStack2<int>::iterator ite2 = mstack2.end();
  ++it2;
  --it2;
  while (it2 != ite2)
  {
  std::cout << *it2 << std::endl;
  ++it2;
  }
  std::list<int> s2(mstack2);

return 0;
}
