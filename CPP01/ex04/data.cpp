#include "data.hpp"
#include <fstream>

Data::Data(std::string filename, std::string s1, std::string s2): _filename(filename), _string1(s1), _string2(s2)
{
  //std::cout << "Constructor of Data called!" << std::endl;
  return ;
}

Data::~Data(void)
{
  //std::cout << "Destructor of Data called!" << std::endl;
  return ;
}

void  Data::print_outf(void)
{
  std::ifstream tmpfile;
  std::string tmp;
  char c;

  tmpfile.open(this->_filename + ".replace");
  if (tmpfile.fail())
  {
    std::cout << "error with outfile!" << std::endl;
    exit(0);
  }
  while (!tmpfile.eof() && tmpfile >> std::noskipws >> c)
    tmp += c;
  std::cout << "OUTFILE : " << std::endl;
  std::cout << tmp << std::endl;
  tmpfile.close();
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
  std::cout << "INFILE : " << std::endl;
  std::cout << tmp << std::endl;
  inf.close();
  this->road_out(tmp);
  return ;
}

void  Data::road_out(std::string text)
{
  std::ofstream outf;
  int           pos;
  int           i = 0;

  outf.open(this->_filename + ".replace");
  if (outf.fail())
  {
    std::cout << "error with outfile" << std::endl;
    exit(0);
  }
  while(i < (int)text.size())
  {
    pos = text.find(this->_string1, i);
    if (pos != -1 && pos == i)
    {
      outf << this->_string2;
      i += std::string(this->_string1).size() - 1;
    }
    else
      outf << text[i];
    i++;
  }
  outf.close();
  std::cout << "*.replace created !*" << std::endl;
  return ;
}
