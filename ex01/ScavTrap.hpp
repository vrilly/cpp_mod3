// Created by Tom Jans on 8/5/20.

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class ScavTrap
{
    unsigned int hp;
    unsigned int max_hp;
    unsigned int pp;
    unsigned int max_pp;
    unsigned int level;
    unsigned int melee_dmg;
    unsigned int ranged_dmg;
    unsigned int armor_dmg;
    std::string name;
public:
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &fragTrap);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &fragTrap);
    void rangedAttack(std::string const &target) const;
    void meleeAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
};


#endif //SCAVTRAP_HPP
