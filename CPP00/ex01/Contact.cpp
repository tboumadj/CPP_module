/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:21:57 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/07 16:13:21 by tboumadj         ###   ########.fr       */
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

    while (str.empty() || !str.compare(" ") || !str.compare("  ")
            || !str.compare("   ") || !str.compare("    ") || !str.compare("     ")
                || !str.compare("      ") || !str.compare("       ") || !str.compare("       ") || !str.compare("	"))
    {
        std::cout << "Type First Name : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->FirstName = str;
    str = "";
    while (str.empty() || !str.compare(" ") || !str.compare("  ")
            || !str.compare("   ") || !str.compare("    ") || !str.compare("     ")
                || !str.compare("      ") || !str.compare("       ") || !str.compare("       ") || !str.compare("	"))
    {
        std::cout << "Type Last Name : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->LastName = str;
    str = "";
    while (str.empty() || !str.compare(" ") || !str.compare("  ")
            || !str.compare("   ") || !str.compare("    ") || !str.compare("     ")
                || !str.compare("      ") || !str.compare("       ") || !str.compare("       ") || !str.compare("	"))
    {
        std::cout << "Type NickName : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->NickName = str;
    str = "";
    while (str.empty() || !str.compare(" ") || !str.compare("  ")
            || !str.compare("   ") || !str.compare("    ") || !str.compare("     ")
                || !str.compare("      ") || !str.compare("       ") || !str.compare("       ") || !str.compare("	"))
    {
        std::cout << "Type Phone Number : ";
        std::getline(std::cin, str);
        std::size_t found = str.find_first_not_of(" 0123456789");
        if (found!=std::string::npos)
            str = "";
    }
    if (!str.empty())
        this->PhoneNumber = str;
    str = "";
    while (str.empty() || !str.compare(" ") || !str.compare("  ")
            || !str.compare("   ") || !str.compare("    ") || !str.compare("     ")
                || !str.compare("      ") || !str.compare("       ") || !str.compare("       ") || !str.compare("	"))
    {
        std::cout << "Type Darkest Secret : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->DarkestSecret = str;
    str = "";
    this->index = count;
    return ;
}