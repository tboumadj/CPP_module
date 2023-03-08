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