/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:27 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:13:28 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "adress string : " << &string << std::endl;
  std::cout << "adress PTR : " << stringPTR << std::endl;
  std::cout << "adress REF : " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "val string : " << string << std::endl;
  std::cout << "val PTR : " << *stringPTR << std::endl;
  std::cout << "val REF : " << stringREF << std::endl;
  return (0);
}
