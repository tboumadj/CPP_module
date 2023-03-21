/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:42:59 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 20:14:08 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: virtual public Animal
{
public:
    Dog();
    Dog(std::string str);
    virtual ~Dog();
    Dog(const Dog &co);
    Dog &operator=(const Dog &co);

    virtual void  makeSound();
  };
#endif
