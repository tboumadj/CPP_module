
#include "../inc/Serializer.hpp"

int main()
{
  Data      *ptr;
  ptr->_data = "tboumadj";
  ptr->_num = 42;
  Data      *newptr;
  uintptr_t raw;

  //print
  std::cout << "Ptr address: [" << &ptr << "]" << std::endl;
  std::cout << "Ptr data: [" << ptr->_data << "]" << std::endl;
  std::cout << "Ptr num: [" << ptr->_num << "]" << std::endl;
  //------------
  Serializer a;
  raw = a.serialize(ptr);
  std::cout << "raw address: [" << raw << "]" << std::endl;
  newptr = a.deserialize(raw);
  //print
  std::cout << "newptr adress: [" << &newptr << "]" << std::endl;
  std::cout << "newptr data: [" << newptr->_data << "]" << std::endl;
  std::cout << "newptr num: [" << newptr->_num << "]" << std::endl;

  return (0);
}
