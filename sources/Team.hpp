/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Cowboy.hpp"
#include "Point.hpp"
#include "character.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "Ninja.hpp"
#include "TrainedNinja.hpp"
namespace ariel
{
    class Team
    {
    protected:
        Character *leader;

    public:
        Team(ariel::Character *player);
        virtual void add(Character *player);
        virtual bool stillAlive();
        virtual void print();
        virtual void attack(Team *);
    };

};