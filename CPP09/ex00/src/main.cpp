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
#include <iomanip>

struct Data_csv 
{
  std::string date;
  std::string value;
};

std::vector<std::string> split(const std::string &str, char delimiter)
{
  std::vector<std::string> result;
  std::stringstream ss(str);
  std::string item;

  while (std::getline(ss, item, delimiter))
  {
    //std::cout << "item: " << item << std::endl;
    result.push_back(item);
  }
  return result;
}

bool check_param(const std::string &str)
{
  for (std::size_t i = 0; i < str.length(); ++i)
  {
    if (!std::isdigit(str[i]) && !std::ispunct(str[i]) && str[i] != ' ')
      return false;
  }
    return true;
}

bool check_bisextile(const std::string &date)
{
  size_t n = atof(date.c_str());
  if (n == 2000 || n == 2004 || n == 2008 || n == 2012 || n == 2016 ||
        n == 2020 || n == 2024 || n == 2028)
  {
    std::cout << "annee bisextile" << std::endl;
    return true;
  }
  return false;
}

bool check_month(const std::string &month)
{
  size_t n = atof(month.c_str());
  if (n > 12)
    return false;
  return true;
}

bool check_day(const std::string &day, const std::string &month, bool bi_year)
{
  size_t m = atof(month.c_str());
  size_t d = atof(day.c_str());
  if (bi_year == true && m == 02)
  {
    if (d > 29)
      return false;
  }
  else if (bi_year == false && m == 02)
  {
    if (d > 28)
      return false;
  }
  else
  {
    if (m == 01 || m == 03 || m == 05 || m == 07 || m == 8 || m == 10 || m == 12)
    {
      if (d > 31)
        return false;
    }
    else
    {
        if(d > 30)
          return false;
    }
  }
  return true;
}

bool check_year(const std::string &year)
{
  size_t y = atof(year.c_str());
  if (y < 2009 || y > 2023)
    return false;
  return true;
}

bool check_date(const std::string &date)
{
  std::vector<std::string> substrings = split(date, '-');
  bool bi_year = false;
  
  //------------PRINT----------
  //for (std::size_t i = 0; i < substrings.size(); ++i)
  //{
  //  std::cout << "Substring " << i + 1 << ": " << substrings[i] << std::endl;
  //}
  //------------------------
  bi_year = check_bisextile(substrings[0]);
  if (check_year(substrings[0]) == false)
  {
    std::cout << "Error: year past creation of BT" << std::endl;
    return false;
  }
  if (check_month(substrings[1]) == false)
  {
    std::cout << "Error : month too big" << std::endl;
    return false;
  }
  if (check_day(substrings[2], substrings[1], bi_year) == false)
  {
    std::cout << "Error : day too big" << std::endl;
    return false;
  }
  return true;
}

bool check_value(const std::string &value)
{
  double n = -1;

  if (value.empty())
  {
    std::cout << "Error : no value." << std::endl;
    return false;
  }
  else
  {
    double n = atof(value.c_str());
    //std::cout << "n: " << n << std::endl;
    if (n < 0 || n > 10000)
    {
      std::cout << "Error : too large number" << std::endl;
      return false;
    }
    for (std::size_t i = 0; i < value.length(); ++i)
    {
      if (value[i] == '-')
      {
        std::cout << "Error : not a positive number." << std::endl;
        return false;
      }
    }
  }
  return true;
}

std::vector<Data_csv>::const_iterator find_incsv(std::string &date, std::vector<Data_csv> csv)
{
  std::vector<std::string> date_input = split(date, '-');
  std::vector<Data_csv>::const_iterator it = csv.begin();
  ++it;
  while(++it != csv.end())
  {
    const Data_csv tmp_csv = *it;
    std::vector<std::string> date_csv = split(tmp_csv.date, '-');
    if (date_input[0] == date_csv[0] && date_input[1] == date_csv[1])
    {
      float d_input = std::stof(date_input[2]);
      float d_csv = std::stof(date_csv[2]);
      //std::cout << "di: " << d_input << "dc: " << d_csv << std::endl;
      while(d_input > d_csv)
      {
        ++it;
        const Data_csv tmp_csv = *it;
        std::vector<std::string> date_csv = split(tmp_csv.date, '-');
        float d_input = std::stof(date_input[2]);
        float d_csv = std::stof(date_csv[2]);
        //std::cout << "di2: " << d_input << "dc2: " << d_csv << std::endl;
        if (d_input == d_csv)
          return (it);
        if (d_input < d_csv)
          return (--it);
        if (date_input[0] != date_csv[0] || date_input[1] != date_csv[1])
          return (--it);
      }
      return (it);
    }
    if (it == csv.end())
    {
      float y_input = std::stof(date_input[0]);
      float y_csv = std::stof(date_csv[0]);
      if (y_input > y_csv)
        return (--it);
    }
  }
  return (it);
}

std::vector<Data_csv>::const_iterator find_date(std::string input, std::vector<Data_csv> csv, std::vector<Data_csv>::const_iterator it)
{
  //for(std::vector<Data_csv>::const_iterator it = input.begin(); it != input.end(); ++it)
  //{
  //  const Data_csv tmp_input = *it;
    //-----------
    it = find_incsv(input, csv);
  //}
  return (it);
}

std::vector<Data_csv>  extractData(const std::string &file_i, const char &s)
{
  std::vector<Data_csv> csv;
  std::ifstream file;
  
  file.open(file_i);
  if (file.fail())
  {
    std::cerr << "Error : couldn't open file" << std::endl;
    return (csv);
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream ss(line);
    std::string champ1;
    std::string champ2;
    Data_csv data;

    while (std::getline(ss, champ1, s))
    {
      if (check_param(champ1) == true)
        data.date = champ1;
      std::getline(ss, champ2, s);
      if (check_param(champ2) == true && champ2 != champ1)
        data.value = champ2;
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
    std::cerr << "Error : couldn't open file." << std::endl;
    return (0);
  }
  else
  {
    std::cout << std::endl << "------------------------------" << std::endl;
    //--------------CSV-------------------------------
    std::vector<Data_csv> csv = extractData("data.csv", ',');
    //int i = 1;
    //for (std::vector<Data_csv>::const_iterator it = csv.begin(); it != csv.end(); ++it)
    //{
    //  const Data_csv data = *it;
      //-------------------PRINT-----------------
    //  std::cout << "----ligne csv[" << ++i << "] -------" << std::endl;
    //  std::cout << "Date : " << data.date << std::endl;
    //  std::cout << "Value : " << data.value << std::endl;
      //------------------------------------------
  //  }



    //--------------Input-----------------------
    std::cout << "--------------------------" << std::endl;
    std::vector<Data_csv> input = extractData(argv[1], '|');//try throw if not open
    int i = 1;
    std::vector<Data_csv>::const_iterator it;
    for(std::vector<Data_csv>::const_iterator it2 = input.begin(); it2 != input.end(); ++it2)
    {
      const Data_csv tmp_input = *it2;
      //--------------PRINT---------------
      //std::cout << "----ligne input[" << ++i << "] -------" << std::endl;
      std::cout << "------------------------------" << std::endl;
      std::cout << "Date : " << tmp_input.date << std::endl;
      std::cout << "Value : " << tmp_input.value << std::endl;
      //---------------------------------
      if (tmp_input.date.empty() == false || tmp_input.value.empty() == false)
      {
        check_date(tmp_input.date);
        check_value(tmp_input.value);
        it = find_date(tmp_input.date, csv, it);
        const Data_csv tmp_csv = *it;
        float v_in = atof(tmp_input.value.c_str());
        float v_cs = atof(tmp_csv.value.c_str());
        std::cout << tmp_input.date << " > " << tmp_input.value << " = "<< std::fixed << std::setprecision(2) << v_in * v_cs << std::endl;
      }
      //if (i == 5)
      //  break ;
    }

  }
  return (0);
}
