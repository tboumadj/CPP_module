/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:51:42 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/13 15:20:32 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <ostream>
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <array>

template<typename T>
void easyfind(T cnt, int target)
{
  try
  {
    if (std::find(cnt.begin(), cnt.end(), target) != cnt.end())
      std::cout << "La valeur [" << target << "] est present dans le container." << std::endl;
    else
      std::cout << "La valeur [" << target << "] n'est pas dans le container.." << std::endl;
    }
  catch(...)
  {
      return ;
  }
  return ;
  }

#endif
