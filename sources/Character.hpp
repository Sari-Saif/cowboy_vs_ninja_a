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
using std::string;
namespace ariel
{
    class Character
    {
    private:
        // data member's
        Point _location();
        string _name;
        int _target;

    public:
        // method's
        bool isAlive();
        double distance();
        string getName();
        Point Location();
        void print();
    };
};