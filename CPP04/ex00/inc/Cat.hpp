/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:43:22 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/21 17:39:59 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: virtual public Animal
{
public:
    Cat();
    Cat(std::string str);
    virtual ~Cat();
    Cat(const Cat &co);
    Cat &operator=(const Cat &co);
};

#endif
