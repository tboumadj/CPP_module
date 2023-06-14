/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:02:59 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/14 19:27:53 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <ostream>
# include <stack>

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
#endif
