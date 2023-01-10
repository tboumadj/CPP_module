/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/10 15:07:11 by tboumadj         ###   ########.fr       */
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

std::string	PhoneBook::ft_shinter(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.insert(9, ".");
	}
	return (str);
}

void	PhoneBook::print_contact(void)
{	
	int i = 1;
	std::string temp;

	if ( i > this->len)
		std::cout << "Add Contact to search one.." << std::endl;
	while (i <= this->len)
	{
		std::cout << "|" << std::setw(10) << cnt[i].get_index();
		temp = cnt[i].get_Fname();
		if (cnt[i].FirstName.size() > 10)
			temp = ft_shinter(cnt[i].FirstName);
		std::cout << "|" << std::setw(10) << temp;
		temp.clear();
		temp = cnt[i].get_Lname();
		if (cnt[i].LastName.size() > 10)
			temp = ft_shinter(cnt[i].LastName);
		std::cout << "|" << std::setw(10) << temp;
		temp.clear();
		temp = cnt[i].get_Nname();
		if (cnt[i].NickName.size() > 10)
			temp = ft_shinter(cnt[i].NickName);
		std::cout << "|" << std::setw(10) << temp;
		temp.clear();
		temp = cnt[i].get_Pnum();
		if (cnt[i].PhoneNumber.size() > 10)
			temp = ft_shinter(cnt[i].PhoneNumber);
		std::cout << "|" << std::setw(10) << temp;
		temp.clear();
		temp = cnt[i].get_Dsec();
		if (cnt[i].DarkestSecret.size() > 10)
			temp = ft_shinter(cnt[i].DarkestSecret);
		std::cout << "|" << std::setw(10) << temp << std::endl;
		temp.clear();
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
