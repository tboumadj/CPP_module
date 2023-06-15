/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:02:59 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 12:32:11 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <ostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack: public std::stack<T>
{
  public:
    MutantStack(): std::stack<T>()
    {
      std::cout << "Constructor Default MutantStack called!" << std::endl;
      return ;
    }
    ~MutantStack()
    {
      std::cout << "Destructor MutantStack called!" << std::endl;
    }
    MutantStack(MutantStack const &co): std::stack<T>()
    {
      *this = co;
    }
    MutantStack &operator=(MutantStack const &co)
    {
      std::stack<T>::operator=(co);
      return (*this);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator    begin()
    {
      return (this->c.begin());
    }
    iterator   end()
    {
      return (this->c.end());
    }
};
template<typename T>
class MutantStack2: public std::list<T>
{
  public:
    MutantStack2(): std::list<T>()
    {
      std::cout << "Constructor Default MutantStack called!" << std::endl;
      return ;
    }
    ~MutantStack2()
    {
      std::cout << "Destructor MutantStack called!" << std::endl;
    }
    MutantStack2(MutantStack2 const &co): std::list<T>()
    {
      *this = co;
    }
    MutantStack2 &operator=(MutantStack2 const &co)
    {
      std::list<T>::operator=(co);
      return (*this);
    }
};
#endif
