/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:54:20 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 13:57:00 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

int main()
{
  int a = 2;
  int b = 3;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  ::swap(a, b);
  std::cout << "SWAPPED" << std::endl;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
  std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine23";
  std::cout << "c = " << c << ", d = " << d << std::endl;
  ::swap(c, d);
  std::cout << "SWAPPED" << std::endl;
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
  std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

  return (0);
}
