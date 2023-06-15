/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:01:49 by tboumadj          #+#    #+#             */
/*   Updated: 2023/06/15 14:47:16 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
      //numbers[-2] = 0;
      std::cout << "size: " << numbers.size() << std::endl;
    }
    catch(const Array<int>::ArrayVoid &e)
    {
        std::cerr << e.what() << "1" << '\n';
    }
    catch(const Array<int>::IndexTooLowException &e)
    {
        std::cerr << e.what() << "1" << '\n';
    }
    catch(const Array<int>::IndexTooHighException &e)
    {
        std::cerr << e.what() << "1" << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const Array<int>::ArrayVoid &e)
    {
        std::cerr << e.what() << "2" << '\n';
    }
    catch(const Array<int>::IndexTooLowException &e)
    {
        std::cerr << e.what() << "2" << '\n';
    }
    catch(const Array<int>::IndexTooHighException &e)
    {
        std::cerr << e.what() << "2" << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    //delete [] mirror;
    return 0;
}
