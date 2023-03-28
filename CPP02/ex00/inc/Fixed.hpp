/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:26 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:11:27 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class	Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed &n);
	Fixed & operator = (const Fixed &n);
	~Fixed(void);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int	_num;
	int const static _numstat = 8;

};

#endif
