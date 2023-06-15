/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:54:27 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 13:54:30 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string.h>

template<typename T>
void  swap(T &a, T &b)
{
  T tmp = a;

  a = b;
  b = tmp;
}

template<typename T>
const T &min(const T &a, const T &b)
{
  if (a < b)
    return a;
  else
    return b;
  //return (a < b ? a : b);
}

template<typename T>
const T &max(const T &a, const T &b)
{
  if (a > b)
    return a;
  else
    return b;
  //return (a > b ? a : b);
}

#endif
