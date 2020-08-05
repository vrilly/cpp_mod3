// Created by Tom Jans on 8/5/20.

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name)
    : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    pp = 120;
    max_pp = 120;
    melee_dmg = 60;
}
