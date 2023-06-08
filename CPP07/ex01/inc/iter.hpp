
#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>
# include <cctype>

template<typename T>
void  iter(T *addr, int len, void (*f)(T &))
{
  if (addr == NULL || f == NULL)
    return ;
  int i = -1;
  while (++i < len)
    f(addr[i]);
  return ;
}

#endif
