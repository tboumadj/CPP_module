/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/31 19:33:59 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{

	std::cout << "Constructor called" << std::endl;
    this->print();
	return ;
}

PhoneBook::~PhoneBook(void)
{

	std::cout  << "Destructor called" << std::endl;
	return ;
}

void    PhoneBook::print(void)
{
    std::cout << "Enter name: ";
    getline(std::cin, this->name);
    if (name.empty())
        this->print();
    else
        std::cout << "name =  [" << name << "]" << std::endl;

    return ;
}

int main()
{
    PhoneBook instance;
    return (0);
}