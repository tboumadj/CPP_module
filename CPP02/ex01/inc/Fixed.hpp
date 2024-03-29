/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:50 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/04/01 07:13:23 by tboumadj         ###   ########.fr       */
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
#include <math.h>

class	Fixed
{

public:

	Fixed(void);
  Fixed(const int ni);
  Fixed(const float f);
  Fixed(const Fixed &co);
	~Fixed(void);
  Fixed &operator = (const Fixed &co);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
  float toFloat(void) const;
  int   toInt(void) const;

  friend std::ostream &operator<<(std::ostream &os, const Fixed &nbr);

private:

	int	_num;
  const static int _rawbits = 8;

};

#endif
