// Created by Tom Jans on 8/5/20.

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
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
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &fragTrap);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &fragTrap);
    void rangedAttack(std::string const &target) const;
    void meleeAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
