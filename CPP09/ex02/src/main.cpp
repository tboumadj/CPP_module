/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:06:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/07/04 14:49:38 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cerr << "error too low arg ..." << std::endl;
    return (0);
  }
  else
  {
    try
    {
      PmergeMe merge;
      merge.create_list(argv);
      merge.create_deque(argv);
    }
    catch(...)
    {
      return (0);
    }
  }
  return (0);
}
