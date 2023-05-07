/**
 *
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include <cmath>
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
        Point &_currlocation;
        const string &_name;
        // 0 value of no one
        int _target;
        // by default by instruction that have 110 points
        int _points;
        // when is created by default that true
        bool _isAlive;

    public:
        Character(const string &, Point &);
        // method's
        bool isAlive();
        double distance(const Character *);
        string &getName() const;
        Point &getLocation();
        void print();
        void hit(int);
    };
};