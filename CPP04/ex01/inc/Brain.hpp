

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
public:
    Brain();
    Brain(std::string str);
    ~Brain();
    Brain(const Brain &co);
    Brain &operator=(const Brain &co);

    std::string ideas[100];
};

#endif
