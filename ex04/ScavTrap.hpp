// Created by Tom Jans on 8/5/20.

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();
    void challengeNewcomer();
};


#endif //SCAVTRAP_HPP
