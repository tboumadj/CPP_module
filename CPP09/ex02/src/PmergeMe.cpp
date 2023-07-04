/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:06:17 by tboumadj          #+#    #+#             */
/*   Updated: 2023/07/04 14:52:01 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"
#include <_ctype.h>

PmergeMe::PmergeMe()
{
  return ;
}

PmergeMe::~PmergeMe()
{
  return ;
}

PmergeMe::PmergeMe(const PmergeMe &co)
{
  *this = co;
  return ;
}

//--------------LIST

static std::list<int> merge(const std::list<int> &left, const std::list<int> &right)
{
  std::list<int> result;
  std::list<int>::const_iterator leftIt = left.begin();
  std::list<int>::const_iterator rightIt = right.begin();

  while (leftIt != left.end() && rightIt != right.end())
  {
    if (*leftIt <= *rightIt)
      {
        result.push_back(*leftIt);
        ++leftIt;
      }
    else
      {
        result.push_back(*rightIt);
        ++rightIt;
      }
  }

  while (leftIt != left.end())
  {
    result.push_back(*leftIt);
    ++leftIt;
  }

  while (rightIt != right.end())
  {
    result.push_back(*rightIt);
    ++rightIt;
  }
  return result;
}

static std::list<int> mergeInsertSort(std::list<int> &input)
{
  if (input.size() <= 1)
  {
    return input;
  }

  std::list<int> left, right;
  std::list<int>::iterator it = input.begin();
  std::advance(it, input.size() / 2);
  left.splice(left.begin(), input, input.begin(), it);
  right.splice(right.begin(), input);

  left = mergeInsertSort(left);
  right = mergeInsertSort(right);

  return merge(left, right);
}

void PmergeMe::create_list(char **data)
{
  int i = 0;
  while (data[++i])
  {
    if (!isdigit(*data[i]))
    {
      std::cerr << "error not digit.. or negativ number" << std::endl;
      return ;
    }
    int nbr = std::atoi(data[i]);
    //std::cout << "nbr_l: " << nbr << std::endl;
    this->n_list.push_back(nbr);
  }
  //-----------VERIF
  std::list<int>::iterator it;
  std::cout << "list: " << std::endl;
  for(it = this->n_list.begin(); it != this->n_list.end(); ++it)
  {
    std::cout << *it << ", ";
    if (*it <= 0)
    {
      std::cerr << "error negativ number.." << std::endl;
      return ;
    }
  }
  std::cout << std::endl;
  //Chrono
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  this->n_list = mergeInsertSort(this->n_list);

  //Chrono
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

  //-----------
  std::cout << "List apres tri: " << std::endl;
  std::list<int>::iterator it2;
  for(it2 = this->n_list.begin(); it2 != this->n_list.end(); ++it2)
  {
    std::cout << *it2 << ", ";
  }
  std::cout << std::endl;

  long long duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  std::cout << "Time to process a range of " << this->n_list.size()
    << " elements with std::list : " << duration << " us" << std::endl;
}

//-------------------------Deque


static void merge_deq(std::deque<int> &left, std::deque<int> &right, std::deque<int> &result)
{
  while (!left.empty() && !right.empty())
  {
    if (left.front() <= right.front())
      {
        result.push_back(left.front());
        left.pop_front();
      }
    else
    {
      result.push_back(right.front());
      right.pop_front();
    }
  }

  while (!left.empty())
  {
    result.push_back(left.front());
    left.pop_front();
  }

  while (!right.empty())
  {
    result.push_back(right.front());
    right.pop_front();
  }
}

static void mergeInsertSort_deq(std::deque<int>& arr)
{
  if (arr.size() <= 1)
  {
    return;
  }

  std::deque<int> left, right;
  int middle = arr.size() / 2;

  for (int i = 0; i < middle; i++)
  {
    left.push_back(arr[i]);
  }
  for (int i = middle; i < arr.size(); i++)
  {
    right.push_back(arr[i]);
  }

    mergeInsertSort_deq(left);
    mergeInsertSort_deq(right);

    arr.clear();
    merge_deq(left, right, arr);
}

void PmergeMe::create_deque(char **data)
{
  int i = 0;
  while(data[++i])
  {
    if (!isdigit(*data[i]))
    {
      return ;
    }
    int nbr = std::atoi(data[i]);
    //std::cout << "nbr_m: " << nbr << std::endl;
    this->n_deq.push_back(nbr);
  }

  //---------VERIF
  std::deque<int>::iterator it;
  std::cout << "------------------" << std::endl;
  std::cout << "deque: " << std::endl;
  for (it = this->n_deq.begin(); it != this->n_deq.end(); ++it)
  {
    std::cout << *it << ", ";
    if (*it < 0)
    {
      std::cerr << "error" << std::endl;
      return ;
    } 
  }
  std::cout << std::endl;
//Chrono
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  mergeInsertSort_deq(this->n_deq);

 //Chrono
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

  std::cout << "deque apres tri: " << std::endl;;
  std::deque<int>::iterator it2;
  for (it2 = this->n_deq.begin(); it2 != this->n_deq.end(); ++it2)
  {
    std::cout << *it2 << ", ";
  }
  std::cout << std::endl;

  long long duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  std::cout << "Time to process a range of " << this->n_deq.size()
    << " elements with std::deque : " << duration << " us" << std::endl;
}
