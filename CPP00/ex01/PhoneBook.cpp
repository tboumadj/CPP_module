/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/08 17:43:28 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor of PhoneBook called" << std::endl;
	this->count = 0;
	this->welcome();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructor of PhoneBook called" << std::endl;
	return ;
}

void    PhoneBook::welcome(void)
{
	std::cout << "       _______________________" << std::endl;
	std::cout << "    .'.-----_____________-----.'." << std::endl;
	std::cout << "   / /                         \\ \\  " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | | 	       Welcome         | | " << std::endl;
	std::cout << "   | | 		 to            | | " << std::endl;
	std::cout << "   | | 	        your           | | " << std::endl;
	std::cout << "   | | 	      PhoneBook        | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |   *add*                 | | " << std::endl;
	std::cout << "   | |   *search*              | | " << std::endl;
	std::cout << "   | |   *exit*                | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "   | |                         | | " << std::endl;
	std::cout << "    \\ \\                       / /" << std::endl;
	std::cout << "    '. \\_____________________/ .'" << std::endl;
	std::cout << "      '-----------------------`" << std::endl;
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
		cnt[count].add_contact(count);
	}
	else if (data == "search")
		print_contact();
	else if (data == "exit")
	{
		std::cout << "       _______________________" << std::endl;
		std::cout << "    .'.-----_____________-----.'." << std::endl;
		std::cout << "   / /                         \\ \\  " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | | 	       PhoneBook       | | " << std::endl;
		std::cout << "   | | 		 Shut          | | " << std::endl;
		std::cout << "   | | 		 Down          | | " << std::endl;
		std::cout << "   | | 		 ...           | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "   | |                         | | " << std::endl;
		std::cout << "    \\ \\                       / /" << std::endl;
		std::cout << "    '. \\_____________________/ .'" << std::endl;
		std::cout << "      '-----------------------`" << std::endl;
		return ;
	}
	entry_road();
	return ;
}

void	PhoneBook::print_contact(void)
{	
	int i = 1;

	if ( i > this->len)
		std::cout << "Add Contact to search one.." << std::endl;
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
		if (size > 0 && size < 9 && size <= this->len)
		{
			std::cout << " * Index *          [" << cnt[size].get_index() << "]" << std::endl;
			std::cout << " * First Name *     [" << cnt[size].get_Fname() << "]" << std::endl;
			std::cout << " * Last Name *      [" << cnt[size].get_Lname() << "]" << std::endl;
			std::cout << " * Nick Name *      [" << cnt[size].get_Nname() << "]" << std::endl;
			std::cout << " * Phone Number *   [" << cnt[size].get_Pnum() << "]" << std::endl;
			std::cout << " * Darkest Secret * [" << cnt[size].get_Dsec() << "]" << std::endl;
		}
		else
			std::cout << "wrond index..." << std::endl;
	}
	catch(...)
	{
		std::cout << "wrond index..." << std::endl;
		return ;
	}
	}
	return ;
	}
