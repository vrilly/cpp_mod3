// Created by Tom Jans on 8/5/20.

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP


#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    SuperTrap(std::string const &name);
};


#endif //SUPERTRAP_HPP
