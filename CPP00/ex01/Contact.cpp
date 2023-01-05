/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:21:57 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/05 15:38:32 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
    std::cout << "Constructor of Contact called" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    std::cout << "Destructor of Contact called" << std::endl;
    return ;
}

void	Contact::add_contact(void)
{
    std::string str;
    while (str.empty())
    {
        std::cout << "Type First Name : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->FirstName = str;
    str = "";
    while (str.empty())
    {
        std::cout << "Type Last Name : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->LastName = str;
    str = "";
    while (str.empty())
    {
        std::cout << "Type NickName : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->NickName = str;
    str = "";
        while (str.empty())
    {
        std::cout << "Type Phone Number : ";
        std::getline(std::cin, str);
    }
    if (!str.empty())
        this->PhoneNumber = stoi(str);
    str = "";
    return;
}