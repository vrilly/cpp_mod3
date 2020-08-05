// Created by Tom Jans on 8/5/20.

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::srand(std::time(NULL));
    FragTrap trap("merp");
    ScavTrap not_trap("norp");
    trap.beRepaired(100);
    not_trap.beRepaired(100);
    not_trap.meleeAttack("bill gates");
    not_trap.rangedAttack("david");
    not_trap.takeDamage(99);
    not_trap.beRepaired(42);
    not_trap.takeDamage(76);
    trap.meleeAttack("bill gates");
    trap.rangedAttack("david");
    trap.takeDamage(99);
    trap.beRepaired(42);
    trap.takeDamage(76);
    not_trap.challengeNewcomer();
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    not_trap.challengeNewcomer();
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    return 0;
}