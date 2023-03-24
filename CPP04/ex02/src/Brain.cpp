/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:58:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 14:58:20 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
  std::cout << "*Default constructor Brain called!*" << std::endl;
  return ;
}

Brain::Brain(std::string str)
{
  std::cout << "*Constructor of Brain called!*" << std::endl;
  return ;
}

Brain::~Brain()
{
  std::cout << "*Destructor of Brain called!*" << std::endl;
  return ;
}

Brain::Brain(const Brain &co)
{
  *this = co;
  return ;
}

Brain &Brain::operator=(const Brain &co)
{
  return (*this);
}
