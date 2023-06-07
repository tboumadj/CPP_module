
#include "../inc/Serializer.hpp"

Serializer::Serializer()
{
  std::cout << "*Default constructor for Serializer called!*" << std::endl;
  return ;
}

Serializer::~Serializer()
{
  std::cout << "*Destructor for Serializer called!*" << std::endl;
  return ;
}

Serializer::Serializer(const Serializer &co)
{
  *this = co;
  return ;
}

//Surcharge
Serializer &Serializer::operator=(const Serializer &co)
{
  if (this != &co)
  {
    *this = co;
  }
  return (*this);
}

//Method
uintptr_t   Serializer::serialize(Data *ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data        *Serializer::deserialize(uintptr_t raw)
{
  return (reinterpret_cast<Data *>(raw));
}

