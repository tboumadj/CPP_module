/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:00:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:00:42 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <ostream>
# include <string>
# include <stack>
# include <cctype>

class RPN
{
  public:
    RPN();
    ~RPN();
    RPN(const RPN &co);
  //Method
    int calcul_rpn(std::string data);

  private:
    std::stack<int> stk;
};
#endif
