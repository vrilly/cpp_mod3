// Created by Tom Jans on 8/5/20.

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name)
    :
    hp(100),
    max_hp(100),
    pp(50),
    max_pp(50),
    level(1),
    melee_dmg(20),
    ranged_dmg(15),
    armor_dmg(3),
    name(name)
{
    std::cout << "A wild scavtrap called " << name << " has been spawned!"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << name << " has spawned from a copying machine (scavtrap)"
              << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &fragTrap)
{
    std::cout << fragTrap.name
              << " has spawned from a inefficient = model copying machine (scavtrap)"
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

ScavTrap::~ScavTrap()
{
    std::cout << name << " disappeared" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) const
{
    std::cout << "SCAVVIE " << name << " attacks " << target
              << " at range, causing " << ranged_dmg << " points of damage!"
              << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) const
{
    std::cout << "SCAVVIE " << name << " attacks " << target
              << " with an iron fist, causing " << melee_dmg
              << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount - armor_dmg > hp)
        hp = 0;
    else
        hp -= amount - armor_dmg;
    std::cout << "SCAVVIE " << name << " has been damaged with "
              << amount - armor_dmg << " points, leaving only " << hp
              << " points to snack on!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    hp += amount;
    if (hp > max_hp)
        hp = max_hp;
    std::cout << "SCAVVIE " << name << " drinks some mountain oil and gets "
              << amount << " points of health back! New HP: " << hp
              << std::endl;
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
