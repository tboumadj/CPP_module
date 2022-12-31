/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:14:07 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/31 18:35:25 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define	PHONEBOOK_CLASS_H
#include <iostream>
#include <string>

class PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);
	void	print(void);

private :

	std::string name;

};

#endif