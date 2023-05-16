/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef TEAM_H

#define TEAM_H
#include "Cowboy.hpp"
#include "Point.hpp"
#include "Character.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "Ninja.hpp"
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
        Team(Character *player);
        void add(Character *members);
        bool stillAlive();
        void print();
        void attack(Team *);
    };

};
#endif