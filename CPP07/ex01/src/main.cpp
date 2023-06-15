/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:58:00 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 14:06:37 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

void ft_neg(int &arr)
{
  arr *= -1;
}

int main()
{
  //-------------------CHAR--------------------
	char a[] = {'A', 'B', 'C'};
  std::cout << "-----------------CHAR----------------" << std::endl;
	std::cout << "Original:" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] << 
    std::endl << std::endl;

	::iter(a, 3, ft_tolower);

	std::cout << "Changed:1" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] <<
	  std::endl << std::endl;

	::iter(a, 3, ft_toupper);

	std::cout << "Changed:2" << std::endl << "a[0]: " << a[0] << 
    std::endl << "a[1]: " << a[1] << std::endl << "a[2]: " << a[2] << 
    std::endl << std::endl;

  //------------------INT-----------------------

  int b[] = {1, 2, 3};
  std::cout << "-------------------CHAR-------------------" << std::endl;
  std::cout << "Original:" << std::endl << "b[0]: " << b[0] <<
    std::endl << "b[1]: " << b[1] << std::endl << "b[2]: " << b[2] <<
    std::endl << std::endl;

  ::iter(b, 3, ft_neg);

  std::cout << "Changed:" << std::endl << "b[0]: " << b[0] <<
    std::endl << "b[1]: " << b[1] << std::endl << "b[2]: " << b[2] <<
    std::endl << std::endl;
  return (0);
} 
