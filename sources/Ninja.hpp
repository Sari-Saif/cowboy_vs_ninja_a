/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef NINJA_H

#define NINJA_H
#include "Character.hpp"
#include "Point.hpp"

#include <string>
#include <iostream>
#include <string>
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
        double distance(Character *);
        string getName();
        Point getLocation();
        string print();
        void hit(int);
        void setName(string name);
        /* move to the enemy location*/
        virtual void move(Character *player);
        /* attack the enemy */
        virtual void slash(Character *player);
    };

};
#endif