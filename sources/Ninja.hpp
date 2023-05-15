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
        // Interface(Abstract class
        // with pure virtual function)
    protected:
        // data member's
        int _speed;
        Point _location;
        string _name;

    public:
        // ctor
        Ninja(string, Point);
        // default ctor
        Ninja();
        /* move to the enemy location*/
        virtual void move(Character *);
        /* attack the enemy */
        virtual void slash(Character *);
    };

};