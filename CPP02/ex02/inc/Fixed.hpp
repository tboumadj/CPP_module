/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:11:50 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/04/01 09:48:38 by tboumadj         ###   ########.fr       */
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
  Fixed &operator=(const Fixed &co);

  //function
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
  float toFloat(void) const;
  int   toInt(void) const;
  static Fixed &min(Fixed &num1, Fixed &num2);
  const static Fixed &min(const Fixed &num1, const Fixed &num2);
  static Fixed &max(Fixed &num1, Fixed &num2);
  const static Fixed &max(const Fixed &num1, const Fixed &num2);

  friend std::ostream &operator<<(std::ostream &os, const Fixed &nbr);

  //Aritmetic
  Fixed operator+(const Fixed &x);
  Fixed operator-(const Fixed &x);
  Fixed operator*(const Fixed &x);
  Fixed operator/(const Fixed &x);

  //Comparaison
  bool operator>(const Fixed &x) const;
  bool operator<(const Fixed &x) const;
  bool operator>=(const Fixed &x) const;
  bool operator<=(const Fixed &x) const;
  bool operator==(const Fixed &x) const;
  bool operator!=(const Fixed &x) const;

  //Incrementation
  Fixed &operator++();
  Fixed operator++(int);
  Fixed &operator--();
  Fixed operator--(int);

private:

	int	_num;
  const static int _rawbits = 8;

};

#endif
