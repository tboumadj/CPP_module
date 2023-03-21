/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:58:24 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 17:36:46 by tboumadj         ###   ########.fr       */
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
    ~Animal();
    Animal(const Animal &co);
    Animal &operator=(const Animal &co);

protected:

  std::string _type;
};

#endif
