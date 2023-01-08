/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:21:57 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/08 17:40:47 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
    //std::cout << "Constructor of Contact called" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    //std::cout << "Destructor of Contact called" << std::endl;
    return ;
}

std::string     Contact::get_Fname(void)
{
    return (this->FirstName);
}

std::string     Contact::get_Lname(void)
{
    return (this->LastName);
}

std::string     Contact::get_Nname(void)
{
    return (this->NickName);
}

std::string     Contact::get_Pnum(void)
{
    return (this->PhoneNumber);
}

std::string     Contact::get_Dsec(void)
{
    return (this->DarkestSecret);
}

int     Contact::get_index(void)
{
    return (this->index);
}

void	Contact::add_contact(int count)
{
    std::string str;

    while (str.empty())
    {
        std::cout << "Type First Name : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_of(" \t");
        if (found!=std::string::npos)
            str.clear();
    }
    if (!str.empty())
        this->FirstName = str;
    str.clear();
    while (str.empty())
    {
        std::cout << "Type Last Name : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_of(" \t");
        if (found!=std::string::npos)
        str.clear();
    }
    if (!str.empty())
        this->LastName = str;
    str.clear();
    while (str.empty())
    {
        std::cout << "Type NickName : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_of(" \t");
        if (found!=std::string::npos)
        str.clear();
    }
    if (!str.empty())
        this->NickName = str;
    str.clear();
    while (str.empty())
    {
        std::cout << "Type Phone Number : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_not_of(" 0123456789");
        if (found!=std::string::npos || str.size() < 10 )
            str.clear();
    }
    if (!str.empty())
        this->PhoneNumber = str;
    str.clear();
    while (str.empty())
    {
        std::cout << "Type Darkest Secret : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_of(" \t");
        if (found!=std::string::npos)
        str.clear();
    }
    if (!str.empty())
        this->DarkestSecret = str;
    str.clear();
    this->index = count;
    return ;
}