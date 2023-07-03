/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:00:57 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:01:15 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "too low argument..." << std::endl;
    return (0);
  }
  RPN rpn;
  int res = rpn.calcul_rpn(argv[1]);
  std::cout << res << std::endl;
  return (0);
}
