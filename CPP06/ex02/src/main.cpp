
#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

static Base *generate()
{
  switch (rand() % 3)
  {
    case 0:
      return (new A());
      break;
    case 1:
      return (new B());
      break;
    case 2:
      return (new C());
      break;
    default:
      std::cout << "Problem with generator ..." << std::endl;
      return (NULL);
  }
}

static void identify(Base *p)
{
  try
  {
    if (dynamic_cast<A *>(p))
      std::cout << "type is A" << std::endl;
    else if (dynamic_cast<B *>(p))
      std::cout << "type is B" << std::endl;
    else if (dynamic_cast<C *>(p))
      std::cout << "type is C" << std::endl;
  }
  catch(...)
  {
    std::cout << "error with identify*" << std::endl;
    return ;
  }
  return ;
}

static void identify(Base &r)
{
  try
  {
    if (dynamic_cast<A *>(&r))
      std::cout << "type is A" << std::endl;
    else if (dynamic_cast<B *>(&r))
      std::cout << "type is B" << std::endl;
    else if (dynamic_cast<C *>(&r))
      std::cout << "type is C" << std::endl;
  }
  catch(...)
  {
    std::cout << "error with identify&" << std::endl;
    return ;
  }
  return ;
}

int main()
{
  std::srand(time(NULL));
  int i = -1;
  while (++i <= 3)
  {
    Base *tmp = generate();
   //---------
    std::cout << "--------------------------" << std::endl;
    std::cout << "Identify Pointer" << std::endl;
    identify(tmp);
   //----------
    std::cout << "Identify reference" << std::endl;
    identify(*tmp);
   //----------
    delete(tmp);
    std::cout << std::endl;
  }
  return (0);
}
