/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:50 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/11 18:03:02 by tboumadj         ###   ########.fr       */
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
  float toFloat(void) const;
  int   toInt(void) const;

private:

	int	_num;
	int const static _numint = 8;
  static const bool _numfloat = 8;

};

#endif
