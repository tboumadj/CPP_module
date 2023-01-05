/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:07:53 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/05 15:36:51 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class Contact {

public :

    Contact(void);
    ~Contact(void);

    std::string     FirstName;
    std::string     LastName;
    std::string     NickName;
    int     PhoneNumber;
    std::string     DarkestSecret;

    void	add_contact(void);

};

#endif