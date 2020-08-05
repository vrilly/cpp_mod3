// Created by Tom Jans on 8/5/20.

#include "FragTrap.hpp"

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
    if (pp < 25) {
        std::cout
            << "FR4G-TP tried to use vaulthunter.exe but failed due to lack of energy points."
            << std::endl;
        return;
    }
    std::string attacks[5] = {
        "SARS-COV-2 vaccines",
        "Facts",
        "Anti-piracy ads",
        "Die Ritters",
        "Toilet paper"
    };
    int random_index = std::rand() % 5;
    std::cout << "FR4G-TP " << name << " attacks " << target << " with "
              << attacks[random_index] << " causing " << std::rand() % max_hp
              << " damage!" << std::endl;
    if (pp > 25)
        pp -= 25;
    else
        pp = 0;
}

FragTrap::FragTrap(const std::string &name)
    : ClapTrap(name)
{
    std::cout << "Fragtrap spawned" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << " is ded" << std::endl;
}

