/**
 *
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include <string>
#include <iostream>
#include "sources\Point.hpp"
#include "sources\Character.hpp"
using std::string;

namespace ariel
{

    class Ninja : public Character
    {

    private:
        // data member's
        Point _location();
        string _name;
        int _target;
        int _speed;

    public:
        Ninja(Ninja &);
        //  default ctor
        Ninja();
        // the enemy location
        void move(Point &);
        void slash();
    };

};