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

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "Error : couldn't open file." << std::endl;
    return (0);
  }
  else
  {
    BitcoinExchange data;
    BitcoinExchange data2;
    //--------------CSV-------------------------------
    std::vector<BitcoinExchange> csv = data.extractData("data.csv", ',');

    //--------------Input-----------------------
    std::vector<BitcoinExchange> input = data2.extractData(argv[1], '|');//throw
    int i = 1;
    std::vector<BitcoinExchange>::const_iterator it;
    for(std::vector<BitcoinExchange>::const_iterator it2 = input.begin(); it2 != input.end(); ++it2)
    {
      BitcoinExchange tmp_input = *it2;
      //--------------PRINT---------------
      //std::cout << "------------------------------" << std::endl;
      //std::cout << "Date : " << tmp_input.get_date() << std::endl;
      //std::cout << "Value : " << tmp_input.get_value() << std::endl;
      //---------------------------------
      if (tmp_input.get_date().empty() == false || tmp_input.get_date().empty() == false)
      {
        if (tmp_input.check_date(tmp_input.get_date()) && tmp_input.check_value(tmp_input.get_value()))
        {
          it = tmp_input.find_incsv(tmp_input.get_date(), csv);
          BitcoinExchange tmp_csv = *it;
          float v_in = atof(tmp_input.get_value().c_str());
          float v_cs = atof(tmp_csv.get_value().c_str());
          std::cout << tmp_input.get_date() << " > " << tmp_input.get_value() << " = "<< std::fixed << std::setprecision(2) << v_in * v_cs << std::endl;
        }
      }
    }
  }
  return (0);
}
