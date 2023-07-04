/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:55:28 by tboumadj          #+#    #+#             */
/*   Updated: 2023/07/04 13:06:55 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <ostream>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <vector>
# include <iomanip>

class BitcoinExchange
{
  public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &co);
  //G&S
    void set_date(const std::string &data);
    void set_value(const std::string &data);
    const std::string get_date();
    const std::string get_value();
  //Method
    std::vector<std::string> split(const std::string &str, char delimiter);
    bool check_param(const std::string &str);
    bool check_bisextile(const std::string &date);
    bool check_month(const std::string &month);
    bool check_day(const std::string &day, const std::string &month, bool bi_year);
    bool check_year(const std::string &year);
    bool check_date(const std::string &date);
    bool check_value(const std::string &value);
    std::vector<BitcoinExchange>::const_iterator find_incsv(const std::string &date, std::vector<BitcoinExchange> csv);
    std::vector<BitcoinExchange> extractData(const std::string &file_i, const char &s);

  private:
    std::string date;
    std::string value;
};

#endif
