/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:21:15 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/31 17:23:57 by tboumadj         ###   ########.fr       */
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