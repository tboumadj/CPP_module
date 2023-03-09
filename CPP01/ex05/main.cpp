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

