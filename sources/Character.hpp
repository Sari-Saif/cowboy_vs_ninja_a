/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
#ifndef CHARACTER_H

#define CHARACTER_H
#include <iostream>
#include <string>
#include <cmath>
#include "Ninja.hpp"
#include "Point.hpp"
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
    };
};
#endif