// Created by Tom Jans on 8/5/20.

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    FragTrap trap("merp");
    ScavTrap not_trap("norp");
    NinjaTrap ninja("ninji");
    SuperTrap super("9000");
    trap.beRepaired(100);
    not_trap.beRepaired(100);
    not_trap.meleeAttack("bill gates");
    not_trap.rangedAttack("david");
    not_trap.takeDamage(99);
    not_trap.beRepaired(42);
    super.vaulthunter_dot_exe("merp");
    not_trap.takeDamage(76);
    trap.meleeAttack("bill gates");
    ninja.ninjaShoebox(trap);
    trap.rangedAttack("david");
    trap.takeDamage(99);
    trap.beRepaired(42);
    ninja.ninjaShoebox(not_trap);
    trap.takeDamage(76);
    not_trap.challengeNewcomer();
    ninja.ninjaShoebox(ninja);
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    ninja.takeDamage(59);
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    not_trap.challengeNewcomer();
    ninja.beRepaired(11);
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    trap.vaulthunter_dot_exe("RMS");
    return 0;
}