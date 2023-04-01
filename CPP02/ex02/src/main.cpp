/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:45 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/04/01 09:49:01 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main()
{
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  Fixed c(2);
  Fixed d(5);
  
  std::cout << "(c+d) " << c + d << std::endl;
  std::cout << "(c*d) " << c * d << std::endl;
  std::cout << "(c-d) " << c - d << std::endl;
  std::cout << "(d/c) " << d / c << std::endl;
  std::cout << "----------------" <<std::endl;
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a,b) << std::endl;

	return (0);
}
