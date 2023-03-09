/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:14:47 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:14:48 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>


class Data
{

public:
    Data(std::string filename, std::string s1, std::string s2);
    ~Data(void);

    std::string _filename;
    std::string _string1;
    std::string _string2;

    void  road_inf(void);
    void  road_out(std::string text);
    void  print_outf(void);
  
};
#endif
