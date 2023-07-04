/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:55:32 by tboumadj          #+#    #+#             */
/*   Updated: 2023/07/04 13:14:04 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
  return ;
}

BitcoinExchange::~BitcoinExchange()
{
  return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &co)
{
  *this = co;
  return ;
}

//---------------G&S
void BitcoinExchange::set_date(const std::string &data)
{
  this->date = data;
  return ;
}

void BitcoinExchange::set_value(const std::string &data)
{
  this->value = data;
  return ;
}

const std::string BitcoinExchange::get_date()
{
  return (this->date);
}

const std::string BitcoinExchange::get_value()
{
  return (this->value);
}

//---------------Method

std::vector<std::string> BitcoinExchange::split(const std::string &str, char delimiter)
{
  std::vector<std::string> result;
  std::stringstream ss(str);
  std::string item;

  while (std::getline(ss, item, delimiter))
  {
    result.push_back(item);
  }
  return result;
}

bool BitcoinExchange::check_param(const std::string &str)
{
  for (std::size_t i = 0; i < str.length(); ++i)
  {
    if (!std::isdigit(str[i]) && !std::ispunct(str[i]) && str[i] != ' ')
      return false;
  }
    return true;
}

bool BitcoinExchange::check_bisextile(const std::string &date)
{
  size_t n = atof(date.c_str());
  if (n == 2000 || n == 2004 || n == 2008 || n == 2012 || n == 2016 ||
        n == 2020 || n == 2024 || n == 2028)
  {
    //std::cout << "annee bisextile" << std::endl;
    return true;
  }
  return false;
}

bool BitcoinExchange::check_month(const std::string &month)
{
  size_t n = atof(month.c_str());
  if (n > 12)
    return false;
  return true;
}

bool BitcoinExchange::check_day(const std::string &day, const std::string &month, bool bi_year)
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

bool BitcoinExchange::check_year(const std::string &year)
{
  size_t y = atof(year.c_str());
  if (y < 2009)
    return false;
  return true;
}

bool BitcoinExchange::check_date(const std::string &date)
{
  std::vector<std::string> substrings = split(date, '-');
  bool bi_year = false;
  
  bi_year = check_bisextile(substrings[0]);
  if (check_year(substrings[0]) == false)
  {
    std::cerr << "Error: year past creation of BT => " << date << std::endl;
    return false;
  }
  if (check_month(substrings[1]) == false)
  {
    std::cerr << "Error : month too big => " << date << std::endl;
    return false;
  }
  if (check_day(substrings[2], substrings[1], bi_year) == false)
  {
    std::cerr << "Error : day too big >= " << date << std::endl;
    return false;
  }
  return true;
}

bool BitcoinExchange::check_value(const std::string &value)
{
  double n = -1;

  if (value.empty())
  {
    std::cerr << "Error : no value." << std::endl;
    return false;
  }
  else
  {
    double n = atof(value.c_str());
    if (n > 10000)
    {
      std::cerr << "Error : too large value" << std::endl;
      return false;
    }
    for (std::size_t i = 0; i < value.length(); ++i)
    {
      if (value[i] == '-')
      {
        std::cerr << "Error : not a positive value" << std::endl;
        return false;
      }
    }
  }
  return true;
}

std::vector<BitcoinExchange>::const_iterator BitcoinExchange::find_incsv(const std::string &date, std::vector<BitcoinExchange> csv)
{
  std::vector<std::string> date_input = split(date, '-');
  std::vector<BitcoinExchange>::const_iterator it = csv.begin();
  ++it;
  while(++it != csv.end())
  {
    const BitcoinExchange tmp_csv = *it;
    std::vector<std::string> date_csv = split(tmp_csv.date, '-');
    if (date_input[0] == date_csv[0] && date_input[1] == date_csv[1])
    {
      float d_input = std::stof(date_input[2]);
      float d_csv = std::stof(date_csv[2]);
      while(d_input > d_csv)
      {
        ++it;
        const BitcoinExchange tmp_csv = *it;
        std::vector<std::string> date_csv = split(tmp_csv.date, '-');
        float d_input = std::stof(date_input[2]);
        float d_csv = std::stof(date_csv[2]);
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
  return (--it);
}

std::vector<BitcoinExchange>  BitcoinExchange::extractData(const std::string &file_i, const char &s)
{
  std::vector<BitcoinExchange> csv;
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
    BitcoinExchange data;

    while (std::getline(ss, champ1, s))
    {
      if (data.check_param(champ1) == true)
        data.set_date(champ1);
      std::getline(ss, champ2, s);
      if (data.check_param(champ2) == true && champ2 != champ1)
        data.set_value(champ2);
    }
    csv.push_back(data);
  }
  file.close();
  return (csv);
}
