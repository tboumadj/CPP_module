/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:09 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/31 18:53:57 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout  << "Destructor called" << std::endl;
	return ;
}

void    PhoneBook::print(void)
{
    std::cout << "Enter name: ";
    getline(std::cin, this->name);
    if (name.empty())
        std::cout << "Void name !" << std::endl;
    else
        std::cout << "name = " << name << std::endl;

    return ;
}

int main()
{
    PhoneBook i;
    i.print();
    return 0;
}