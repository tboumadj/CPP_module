/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/06 19:37:55 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor of PhoneBook called" << std::endl;
	this->count = 0;
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
	std::cout << "[PhoneBook] : ";
	std::getline(std::cin, this->data);
	if (data == "add")
	{
		if (count < 8)
		{
			count++;
			if (len < 8)
			len++;
		}
		else
			count = 1;
		std::cout << "count = " << this->count <<std::endl;
		cnt[count].add_contact(count);
	}
	else if (data == "search")
		print_contact();
	else if (data == "exit")
	{
		std::cout << "PhoneBook Shut Down ..." << std::endl;
		exit(EXIT_SUCCESS) ;
	}
	entry_road();
	return ;
}

void	PhoneBook::print_contact(void)
{	
	int i = 1;

	while (i <= this->len)
	{
		std::cout << " " << cnt[i].get_index();
		std::cout << " | [" << cnt[i].get_Fname() << "] ";
		std::cout << "[" << cnt[i].get_Lname() << "] ";
		std::cout << "[" << cnt[i].get_Nname() << "] ";
		std::cout << "[" << cnt[i].get_Pnum() << "] ";
		std::cout << "[" << cnt[i].get_Dsec() << "] " << std::endl;
		i++;
	}
	if (this->count > 0)
	{
	int size = 0;
	std::cout << "Enter the index : ";
	std::getline(std::cin, this->data);
	try
	{
		size = std::stoi(data);
	}
	catch(...)
	{
		return ;
	}
		if (size > 0 && size < 9 && size <= this->len)
		{
			std::cout << " " << cnt[size].get_index();
			std::cout << " | [" << cnt[size].get_Fname() << "] ";
			std::cout << "[" << cnt[size].get_Lname() << "] ";
			std::cout << "[" << cnt[size].get_Nname() << "] ";
			std::cout << "[" << cnt[size].get_Pnum() << "] ";
			std::cout << "[" << cnt[size].get_Dsec() << "] " << std::endl;
		}
	}
	return ;
	}
