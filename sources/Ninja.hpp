/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include <string>
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
using std::string;

namespace ariel
{

    class Ninja : public Character
    {

    protected:
        // data member's
        int _speed;
        Point _location;
        string _name;

    public:
        Ninja(string, Point);
        Ninja();
        // move to the enemy location
        virtual void move(Character *);
        virtual void slash(Character *);
    };

};