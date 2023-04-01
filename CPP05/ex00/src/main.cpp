/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:58:55 by tboumadj          #+#    #+#             */
/*   Updated: 2023/04/01 10:18:32 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
  //-------------------
  Bureaucrat *a = new Bureaucrat("Machin", 42);
  delete a;
  //-------------------
  Bureaucrat b("Truc", 52);
  return (0);
}
