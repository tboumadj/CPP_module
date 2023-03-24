/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:43:22 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 15:00:27 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
public:
    Cat();
    Cat(std::string str);
    ~Cat();
    Cat(const Cat &co);
    Cat &operator=(const Cat &co);

    std::string getType() const;
    void makeSound() const;
private:
    Brain *_brain;
};

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string str);
    ~WrongCat();
    WrongCat(const WrongCat &co);
    WrongCat &operator=(const WrongCat &co);

    std::string getType() const;
};

#endif
