/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/10 16:56:28 by tboumadj         ###   ########.fr       */
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
	if (data == "add" || data == "ADD")
	{
		if (count < 8)
		{
			count++;
			if (len < 8)
			len++;
		}
		else
			count = 1;
		cnt[count-1].add_contact(count);
	}
	else if (data == "search" || data == "SEARCH")
		print_contact();
	else if (data == "exit" || data == "EXIT")
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
	int i = 0;

	if ( i + 1 > this->len)
	{
		std::cout << "Add Contact to search one.." << std::endl;
		return ;
	}
	std::cout << "*----------------------------------------------------------------------*" << std::endl;
	std::cout << "|" << std::setw(11) << "|" << std::setw(12) << "|" << std::setw(12) << "|"
	<< std::setw(12) << "|" << std::setw(12) << "|" << std::setw(12) << "|" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "| "
	<< std::setw(10) << "First Name" << "| " << std::setw(10) << "Last Name"
	<< "| " << std::setw(10) << "Nick Name" << "| " << std::setw(10) << "Phone Num."
	<< "| " << std::setw(10) << "D. Secret" << "|" << std::endl;
	std::cout << "|----------------------------------------------------------------------|" << std::endl;
	while (i + 1 <= this->len)
	{
		cnt[i].print_search();
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
			std::cout << " * Index *          [" << cnt[size - 1].get_index() << "]" << std::endl;
			std::cout << " * First Name *     [" << cnt[size - 1].get_Fname() << "]" << std::endl;
			std::cout << " * Last Name *      [" << cnt[size - 1].get_Lname() << "]" << std::endl;
			std::cout << " * Nick Name *      [" << cnt[size - 1].get_Nname() << "]" << std::endl;
			std::cout << " * Phone Number *   [" << cnt[size - 1].get_Pnum() << "]" << std::endl;
			std::cout << " * Darkest Secret * [" << cnt[size - 1].get_Dsec() << "]" << std::endl;
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
