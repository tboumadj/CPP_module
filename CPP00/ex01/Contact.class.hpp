/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:07:53 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/05 05:19:02 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>
#include <string>

class Contact {

public :

    Contact(void);
    ~Contact(void);

    std::string     FirstName;
    std::string     LastName;
    std::string     NickName;
    std::string     PhoneNumber;
    std::string     DarkestSecret;

private :

    //AddContact;
};

#endif