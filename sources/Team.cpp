
#pragma once
#include "Team.hpp"
#include "Character.hpp"
#include <vector>
using namespace ariel;

Team::Team(Character *player) : leader(player)
{
    this->_members.push_back(player);
}

void Team::add(Character *members)
{
    this->_members.push_back(members);
}
bool Team::stillAlive() { return false; }
void Team::print() {}
void Team::attack(Team *) {}