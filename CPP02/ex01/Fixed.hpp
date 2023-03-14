/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:50 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/11 19:24:40 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>

class	Fixed
{

public:

	Fixed(void);
  Fixed(const int ni);
  Fixed(const float f);
  Fixed(const Fixed &co);
	~Fixed(void);
  Fixed & operator = (const Fixed &n);

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
