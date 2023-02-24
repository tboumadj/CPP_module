/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 05:07:53 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/01/10 16:44:06 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class Contact {

public :

    Contact(void);
    ~Contact(void);

    void			add_contact(int count);
    std::string		get_Fname(void);
    std::string		get_Lname(void);
    std::string		get_Nname(void);
    std::string		get_Pnum(void);
    std::string		get_Dsec(void);
	int				get_index(void);
    void            print_search(void);
    std::string		ft_shinter(std::string str);

private :

    std::string		FirstName;
    std::string		LastName;
    std::string		NickName;
    std::string		PhoneNumber;
    std::string		DarkestSecret;
	int				index;

};

#endif