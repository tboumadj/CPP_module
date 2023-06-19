/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:55:03 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 14:55:24 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

void  extractData(const std::string &file_i)
{
  std::vector<data> dataa;
  std::ifstream file(file_i.c_str());

  if (!file)
  {
    std::cerr << "Error with opening file." << std::endl;
    return ; //data
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream ss(line);
    std::string champ;
    data dataa;

    while (std:getline(ss, champ, '|'))
    {
      data.champ1 = champ;
    }
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cout << "input file paramater missing..." << std::endl;
    return (0);
  }
  else
  {
    extractData(argv[1]);
  }
  return (0);
}
