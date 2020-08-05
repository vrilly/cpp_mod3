// Created by Tom Jans on 8/5/20.

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap(std::string const &name);
    ~NinjaTrap();
    void ninjaShoebox(NinjaTrap const &ninjaTrap);
    void ninjaShoebox(ScavTrap const &scavTrap);
    void ninjaShoebox(FragTrap const &fragTrap);
};


#endif //NINJATRAP_HPP
