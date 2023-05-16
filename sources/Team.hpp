/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef TEAM_H

#define TEAM_H
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Point.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>
using std::vector;
namespace ariel
{
    class Team
    {
    private:
        Character *leader;
        vector<Character *> _members;

    public:
        // ctor
        Team(Character *player);
        void add(Character *chara);
        bool stillAlive();
        void print();
        void attack(Team *clans);
    };

};
#endif