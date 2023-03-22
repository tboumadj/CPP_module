/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:42:59 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/22 14:48:44 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
#include <string>

class Dog: public Animal
{
public:
    Dog();
    Dog(std::string str);
    ~Dog();
    Dog(const Dog &co);
    Dog &operator=(const Dog &co);

    std::string getType() const;
    void  makeSound() const;
  };
#endif
