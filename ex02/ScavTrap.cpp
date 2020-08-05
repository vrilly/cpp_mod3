// Created by Tom Jans on 8/5/20.

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap spawned" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string attacks[7] = {
        "*blam!* yeah, beeyaaaach. I poped a cap in yo' ass!",
        "Time to kiss your ass goodbye, the end has just begun.",
        "No time to change your fate, no time left, it's too late.",
        "No one will be left to prove the humans existed.",
        "There's a better place for you, but it's far, far away...",
        "Early to bed, early to rise, Makes a man healthy, wealthy, and rise.",
        "Yo momma's so fat her nickname is DAMN!!"
    };
    int random_index = std::rand() % 7;
    std::cout << "SCAVIIE " << name << " says " << attacks[random_index]
              << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "R.I.P. " << name << std::endl;
}
