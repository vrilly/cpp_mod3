// Created by Tom Jans on 8/5/20.

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    :
    hp(100),
    max_hp(100),
    pp(100),
    max_pp(100),
    level(1),
    melee_dmg(30),
    ranged_dmg(20),
    armor_dmg(5),
    name(name)
{
    std::cout << "A wild fragtrap called " << name << " has been spawned!"
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << name << " has spawned from a copying machine" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &fragTrap)
{
    std::cout << fragTrap.name
              << " has spawned from a inefficient = model copying machine"
              << std::endl;
    if (this == &fragTrap)
        return *this;
    hp = fragTrap.hp;
    max_hp = fragTrap.max_hp;
    pp = fragTrap.pp;
    max_pp = fragTrap.max_pp;
    level = fragTrap.level;
    melee_dmg = fragTrap.melee_dmg;
    ranged_dmg = fragTrap.ranged_dmg;
    armor_dmg = fragTrap.armor_dmg;
    name = fragTrap.name;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " has been disassembled" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << name << " attacks " << target
              << " at range, causing " << ranged_dmg << " points of damage!"
              << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << name << " attacks " << target
              << " with an iron fist, causing " << melee_dmg
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount - armor_dmg > hp)
        hp = 0;
    else
        hp -= amount - armor_dmg;
    std::cout << "FR4G-TP " << name << " has been damaged with "
              << amount - armor_dmg << " points, leaving only " << hp
              << " points to snack on!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hp += amount;
    if (hp > max_hp)
        hp = max_hp;
    std::cout << "FR4G-TP " << name << " drinks some mountain oil and gets "
              << amount << " points of health back! New HP: " << hp
              << std::endl;
}
