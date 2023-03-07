#include "data.hpp"
#include <fstream>

Data::Data(std::string filename, std::string s1, std::string s2): _filename(filename), _string1(s1), _string2(s2)
{
  std::cout << "constructor of Data called!" << std::endl;
  std::cout << "filename is : " << this->_filename << std::endl;
  std::cout << "s1 is : " << this->_string1 << std::endl;
  std::cout << "s2 is : " << this->_string2 << std::endl;
  return ;
}

Data::~Data(void)
{
  std::cout << "destructor of Data called!" << std::endl;
  return ;
}

void  Data::road(void)
{
  std::ofstream ofs;
  std::string tmp;
  ofs.open(this->_filename, std::ofstream::out | std::ofstream::app);
  ofs.close();
  return ;
}
