/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:58:37 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/29 15:50:19 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <stdlib.h>
# include <exception>

class Literal
{
  public:
    Literal();
    Literal(const std::string str);
    ~Literal();
    Literal(const Literal &co);
  //Surcharge
    Literal &operator=(const Literal &co);
  //Method
  //G&S
    std::string getData()const;
    int         getType()const;
    char        getChar()const;
    int         getInt()const;
    float       getFloat()const;
    double      getDouble()const;

  //Exception
  //class ErrorExcept : public std::exception
  //{
  //  public:
  //    const char *what() const throw();
  //};

  private:
    std::string       _data;
    int               _type;
    char              _char;
    int               _int;
    float             _float;
    double            _double;
  };

#endif
