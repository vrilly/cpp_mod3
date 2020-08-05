// Created by Tom Jans on 8/5/20.

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name)
    : ClapTrap(name)
{
    hp = 60;
    max_hp = 60;
    pp = 120;
    max_pp = 120;
    melee_dmg = 60;
    ranged_dmg = 5;
    armor_dmg = 0;
    std::cout << "hak hak a ninja appeared" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "something went missing but nobody noticed" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninjaTrap)
{
    std::cout << "pets another ninja, or itself maybe?" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap)
{
    std::cout << "kicks the shitty scavtrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &fragTrap)
{
    std::cout << "frag frag" << std::endl;
}
