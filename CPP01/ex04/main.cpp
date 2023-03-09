/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:42 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:43 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main(int argc, char **argv)
{
  if (argc > 2)
  {
    Data stock(argv[1], argv[2], argv[3]);
    stock.road_inf();
    stock.print_outf();
  }
  else
  {
	  std::cout << "Wrong arguments" << std::endl << "PLS type *filename* + *string_to_find* + *string_to_replace*" << std::endl;
  }
  return (0);
}
