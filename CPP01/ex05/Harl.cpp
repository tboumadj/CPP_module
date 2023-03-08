#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "*Constructor of Harl called!*" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "*Destructor of Harl called!*" << std::endl;
	return ;
}

//PRIVATE

void	Harl::debug(void)
{
	std::cout << "*DEBUG* I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "*INFO* I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std ::cout << "*WARNING* I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month. " << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "*ERROR* This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

//PUBLIC

void	Harl::complain(std::string level)
{
	std::string count[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	while (i < 4)
	{
		if (count[i] == level)
			(this->*f[i])();
		i++;
	}
	return ;
}

