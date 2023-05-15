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
using std::string;
namespace ariel
{
    class Character
    {
    public:
        virtual bool isAlive();
        virtual double distance(const Character *);
        virtual string getName();
        virtual Point getLocation();
        virtual string print();
        virtual void hit(int);
        virtual void setName(string name);
    };
};