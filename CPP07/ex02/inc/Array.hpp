/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:01:42 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 14:43:56 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
  private:
    unsigned int    _size;
    T               *_tab;
  public:
    Array(): _size(0)
    {
      std::cout << "*default constructor Array called!*" << std::endl;
      this->_tab == NULL;
      return ;
    }
    Array(unsigned int n): _size(n)
    {
      std::cout << "*Constructor Array of [" << this->_size << "] called!*" << std::endl;
      this->_tab = new T[this->_size];
      return ;
    }
    ~Array()
    {
      std::cout << "*Destructor of Array called!*" << std::endl;
      delete[] this->_tab;
      return ;
    }
    Array(const Array &co)
    {
      std::cout << "Recopy called!" << std::endl;
      *this = co;
      return ;
    }
    //Surcharge
    Array &operator=(const Array &co)
    {
      if (this != &co)
      {
        this->_size = co._size;
        this->_tab = new T[co._size];
        int i = -1;
        while (++i < co._size)
          this->_tab[i] = co._tab[i];
      }
      return (*this);
    }
    T &operator[](const unsigned int n)
    {
      if (n < 0)
        throw IndexTooLowException();
      if (this->_size < n)
        throw IndexTooHighException();
      if (this->_tab == NULL)
        throw ArrayVoid(); 
      else
        return this->_tab[n];
    }
    //Method
    int size()
    {
      if (this->_tab == NULL || this->_size == 0)
        throw ArrayVoid();
      int i = 0;
      while (i < this->_size)
        i++;
      return (i);
    }
    //Exception
    class IndexTooLowException : public std::exception
    {
      public:
        const char *what() const throw()
        {
          return ("index negative!..");
        }
    };
    class IndexTooHighException : public std::exception
    {
      public:
        const char *what() const throw()
        {
          return ("index too high!..");
        }
    };
    class ArrayVoid : public std::exception
    {
      public:
        const char *what() const throw()
        {
          return ("Array void...");
        }
    };
};

#endif
