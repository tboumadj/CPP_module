/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/05/03 15:46:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
  //-------------------
    Bureaucrat *a = new Bureaucrat("Truc", 52);
    Form *b = new Form("Machin", 45, 151);
  //-----------------
    std::cout << a;
    std::cout << b;
  //-------------------
    a->Decrement();
    a->signForm(*b);
  //--------------------
    delete a;
    delete b;
  //-------------------
  return (0);
}
