/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:58:23 by tboumadj          #+#    #+#             */
/*   Updated: 2023/03/24 14:58:28 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
public:
    Brain();
    Brain(std::string str);
    ~Brain();
    Brain(const Brain &co);
    Brain &operator=(const Brain &co);

    std::string ideas[100];
};

#endif
