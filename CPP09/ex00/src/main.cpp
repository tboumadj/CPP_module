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

struct Data_csv 
{
  std::string date;
  std::string value;
};

bool check_param(const std::string &str)
{
  for (std::size_t i = 0; i < str.length(); ++i)
  {
    if (!std::isdigit(str[i]) && !std::ispunct(str[i]) && str[i] != ' ')
      return false;
  }
    return true;
}

std::vector<Data_csv>  extractData(const std::string &file_i, const char &s)
{
  std::vector<Data_csv> csv;
  std::ifstream file;
  
  file.open(file_i);
  if (file.fail())
  {
    std::cerr << "Error with opening file." << std::endl;
    return (csv);
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream ss(line);
    std::string champ;
    Data_csv data;

    while (std::getline(ss, champ, s))
    {
      if (check_param(champ) == true)
        data.date = champ;
      std::getline(ss, champ, s);
      if (check_param(champ) == true)
        data.value = champ;
    }
    csv.push_back(data);
  }
  file.close();
  return (csv);
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
    //--------------CSV-------------------------------
    std::vector<Data_csv> csv = extractData("data.csv", ',');
    int i = 1;
    for (std::vector<Data_csv>::const_iterator it = csv.begin(); it != csv.end(); ++it)
    {
      const Data_csv data = *it;
      std::cout << "----ligne csv[" << ++i << "] -------" << std::endl;
      std::cout << "Date : " << data.date << std::endl;
      std::cout << "Value : " << data.value << std::endl;
      if (i == 5)
        break ;
    }

    //--------------Input-----------------------
    std::cout << "--------------------------" << std::endl;
    std::vector<Data_csv> input = extractData("input.txt", '|');
    i = 1;
    for(std::vector<Data_csv>::const_iterator it2 = input.begin(); it2 != input.end(); ++it2)
    {
      const Data_csv tmp_input = *it2;
      std::cout << "----ligne input[" << ++i << "] -------" << std::endl;
      std::cout << "Date : " << tmp_input.date << std::endl;
      std::cout << "Value : " << tmp_input.value << std::endl;
      if (i == 5)
        break ;
    }
  }
  return (0);
}
