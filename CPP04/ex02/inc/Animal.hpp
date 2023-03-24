/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:58:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 16:41:02 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <ostream>
# include <iostream>

class Animal
{
public:
    Animal();
    Animal(std::string str);
    virtual ~Animal();
    Animal(const Animal &co);
    Animal &operator=(const Animal &co);

    virtual void  makeSound(void) const = 0;
    virtual std::string  getType() const;

protected:

    std::string _type;
};

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(std::string str);
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &co);
    WrongAnimal &operator=(const WrongAnimal &co);

    void makeSound(void) const;
    virtual std::string getType() const;

protected:

    std::string _wrongtype;
};
#endif
