/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:57:54 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 13:57:57 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>
# include <cctype>

template<typename T>
void  iter(T *addr, int len, void (*f)(T &))
{
  if (addr == NULL || f == NULL)
    return ;
  int i = -1;
  while (++i < len)
    f(addr[i]);
  return ;
}

#endif
