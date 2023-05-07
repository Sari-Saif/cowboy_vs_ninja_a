/**
 *
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Character.hpp"
namespace ariel
{

    class Cowboy : Character
    {
    private:
        int _hitPoints;
        int number_of_boolts;

    public:
        // ctor
        Cowboy(const string &, Point &);
        //  methods
        void shoot(const Character *);
        bool hashboolts();
        void reload();
    };

};