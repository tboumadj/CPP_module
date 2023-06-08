
#include "../inc/iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'B', 'C'};

	std::cout << "Original:" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] << 
    std::endl << std::endl;

	::iter(a, 2, ft_tolower);

	std::cout << "Changed:1" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] <<
	  std::endl << std::endl;

	::iter(a, 2, ft_toupper);

	std::cout << "Changed:2" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] << 
    std::endl << std::endl;
  return (0);
}
