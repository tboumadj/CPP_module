/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:07 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/10 17:00:33 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define	PHONEBOOK_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "Contact.class.hpp"

class PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);

	void			entry_road(void);
	void			print_contact(void);

private :

	int				len;
	int				count;
	std::string		data;
	Contact cnt[8];
	void	welcome(void);
};

#endif