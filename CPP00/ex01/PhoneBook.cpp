/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/31 19:31:53 by tboumadj         ###   ########.fr       */
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
        std::cout << "Empty name !" << std::endl;
    else
        std::cout << "name =  [" << name << "]" << std::endl;

    return ;
}

int main()
{
    PhoneBook instance;
    return (0);
}