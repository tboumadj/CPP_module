/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:07 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/05 15:36:08 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define	PHONEBOOK_CLASS_H
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);

	std::string		data;
	Contact cnt;
	void	entry_road(void);

private :

	void	welcome(void);
};

#endif