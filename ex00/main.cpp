// Created by Tom Jans on 8/5/20.

#include "FragTrap.hpp"

int main()
{
    std::srand(std::time(NULL));
    FragTrap trap("merp");
    trap.beRepaired(100);
    trap.meleeAttack("bill gates");
    trap.rangedAttack("david");
    trap.takeDamage(99);
    trap.beRepaired(42);
    trap.takeDamage(76);
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    return 0;
}