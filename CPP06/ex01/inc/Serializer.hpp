
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <ostream>
# include <iostream>
# include <string>
# include <cstdint>

typedef struct Data
{
  std::string _data;
  size_t      _num;
}   Data;

class Serializer
{
  public:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &co);
  //Surcharge
    Serializer &operator=(const Serializer &co);
  //Method
    uintptr_t   serialize(Data *ptr);
    Data        *deserialize(uintptr_t raw);
};

#endif
