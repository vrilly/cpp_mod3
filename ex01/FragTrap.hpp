// Created by Tom Jans on 8/5/20.

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class FragTrap
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
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &fragTrap);
    void rangedAttack(std::string const &target) const;
    void meleeAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
};


#endif //FRAGTRAP_HPP
