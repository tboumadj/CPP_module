/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:06:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:06:42 by tboumadj         ###   ########.fr       */
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
    PmergeMe merge;
    merge.create_list(argv);
    merge.create_map(argv);
  }
  return (0);
}
