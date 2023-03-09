/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:15:15 by tboumadj@student  #+#    #+#             */
/*   Updated: 2023/03/09 19:15:16 by tboumadj@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	h;
	std::cout << std::endl;
	h.complain("DEBUG");
	std::cout << std::endl;
	h.complain("INFO");
	std::cout << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;
	h.complain("ERROR");
	std::cout << std::endl;
	return (0);
}

