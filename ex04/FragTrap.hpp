// Created by Tom Jans on 8/5/20.

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"
#include <cstdlib>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(std::string const &name);
    ~FragTrap();
    void vaulthunter_dot_exe(std::string const &target);
};


#endif //FRAGTRAP_HPP
