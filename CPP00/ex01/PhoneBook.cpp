/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/05 15:14:47 by tboumadj         ###   ########.fr       */
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

void	PhoneBook::entry_road(void)
{
	std::cout << "PhoneBook : ";
	std::getline(std::cin, this->data);
	if (data.empty())
		entry_road();
	else if (data == "add")
		cnt.add_contact();
	else if (data == "exit")
	{
		std::cout << "PhoneBook Shut Down ..." << std::endl;
		return ;
	}
	else
		entry_road();
	return ;
}
