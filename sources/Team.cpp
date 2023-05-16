
#pragma once
#include "Character.hpp"
#include "Point.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include"Team.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>
namespace ariel
{

    Team::Team(Character *player) : leader(player)
    {
        this->_members.push_back(player);
    }

    void Team::add(Character *chara)
    {
        this->_members.push_back(chara);
    }
    bool Team::stillAlive() { return false; }
    void Team::print() {}
    void Team::attack(Team *clans) {}
};