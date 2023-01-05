/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:07 by tboumadj          #+#    #+#             */
/*   Updated: 2023/01/05 05:31:10 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define	PHONEBOOK_CLASS_H
#include "Contact.class.hpp"
#include <iostream>
#include <string>

class PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);


private :

	void	welcome(void);
};

#endif