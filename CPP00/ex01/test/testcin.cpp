/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:21:15 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/05 13:49:17 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Foo {
    int n;
    Foo() {
       std::cout << "Enter n: "; // no flush needed
       std::cin >> n;
    }
};

Foo f; // static object

int main()
{
    std::cout << "f.n is " << f.n << '\n';
}

//--------------------------------------//

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