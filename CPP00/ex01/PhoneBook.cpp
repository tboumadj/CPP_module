/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/05 05:27:17 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor of PhoneBook called" << std::endl;
    this->welcome();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor of PhoneBook called" << std::endl;
	return ;
}

void    PhoneBook::welcome(void)
{
    std::cout << "Welcome to your Phone" << std::endl;
    return;
}