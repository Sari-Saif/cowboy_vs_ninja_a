/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include <cmath>
#include <string>
#include <iostream>
#include "Point.hpp"
#include "Ninja.hpp"
using std::string;
namespace ariel
{
    class Character
    {

        // Interface(Abstract class
        // with pure virtual function)
    public:
        /**
         * return if Charcater is alive
         * @return bool - true\false
         */
        virtual bool isAlive();
        /**
         * the distance between this and other Character
         * @return double
         */
        virtual double distance(Character *) const;
        virtual string getName();
        virtual Point getLocation();
        virtual string print();
        virtual void hit(int);
        virtual void setName(string);
        // Character(Ninja *);
        // Character(Cowboy *);
    };
};