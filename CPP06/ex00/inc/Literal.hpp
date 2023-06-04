/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:58:37 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/01 17:36:08 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <cstring>
# include <cstdlib>
# include <exception>
# include <algorithm>

# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4
# define SPEC 5
# define NANIF 6
# define ERROR 7

class ScalarConverter
{
  public:
    ScalarConverter();
    ScalarConverter(const std::string str);
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &co);
  //Surcharge
    ScalarConverter &operator=(const ScalarConverter &co);
  //Method
    int   checkType();
    //-------------------
    bool  isInt(const char *tmp);
    bool  isDouble(const char *tmp);
    bool  isFloat(const char *tmp);
    bool  isChar(const char *tmp);
    bool  isNanif(const char *tmp);
    //------------------
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
