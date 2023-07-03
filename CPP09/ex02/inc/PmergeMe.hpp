/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergMe.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:05:09 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 15:05:35 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <ostream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <list>
# include <deque>
# include <chrono>

class PmergeMe
{
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &co);
  //Method
    void create_list(char **data);
    void create_deque(char **data);

  private:
    std::list<int> n_list;
    std::deque<int> n_deq;
};

#endif
