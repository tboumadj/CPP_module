/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:52:01 by tboumadj          #+#    #+#             */
/*   Updated: 2022/12/30 19:58:07 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv) 
{
    if (argc > 1)
    {
        int i = 0;
        int j;
        while (++i < argc)
        {
            j = 0;
            while(argv[i][j])
                    std::cout << (char)toupper(argv[i][j++]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
