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

void  Data::road_inf(void)
{
  std::ifstream inf;
  std::string tmp;
  char  c;

  inf.open(this->_filename);
  if (inf.fail())
  {
      std::cout << this->_filename << " does not exist" << std::endl;
      exit(0);
  }
  while (!inf.eof() && inf >> std::noskipws >> c)
    tmp += c;
  std::cout << std::endl;
  std::cout << tmp << std::endl;
  inf.close();
  this->road_out(tmp);
  return ;
}

void  Data::road_out(std::string text)
{
  std::ofstream outf;

  outf.open("outfile.replace");
  if (outf.fail())
  {
    std::cout << "error with outfile" << std::endl;
    exit(0);
  }
  std::cout << "outfile is ok!" << std::endl;
  outf << text;
  outf.close();
  return ;
}
