/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:14:31 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/30 18:04:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv) 
{
    if (argc > 1)
    {
        int i = 1;
        int j = 0;
        while (i < argc)
        {
            char *tmp = argv[i];
            while(tmp[j])
                    putchar(toupper(tmp[j++]));
            i++;
            j = 0;
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    cout << endl;
    return 0;
}
