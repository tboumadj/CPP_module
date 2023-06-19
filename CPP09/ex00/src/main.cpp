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

struct Data 
{
  std::string champ1;
  std::string champ2;
};

std::vector<Data>  extractData(const std::string &file_i)
{
  std::vector<Data> dataas;
  std::ifstream file;

  file.open(file_i);
  if (file.fail())
  {
    std::cerr << "Error with opening file." << std::endl;
    return (dataas); //data
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream ss(line);
    std::string champ;
    Data dataa;

    while (std::getline(ss, champ, ','))
    {
      dataa.champ1 = champ;
      std::getline(ss, champ, ',');
      dataa.champ2 = champ;
    }
    dataas.push_back(dataa);
  }
  file.close();
  return (dataas);
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
    std::vector<Data> tmps = extractData("data.csv");
    int i = 1;
    for (std::vector<Data>::const_iterator it = tmps.begin(); it != tmps.end(); ++it)
    {
      const Data dataa = *it;
      std::cout << "----ligne [" << ++i << "] -------" << std::endl;
      std::cout << "Champ 1 : " << dataa.champ1 << std::endl;
      std::cout << "Champ 2 : " << dataa.champ2 << std::endl;
    }
  }
  return (0);
}
