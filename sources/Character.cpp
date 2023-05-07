/**
 * declare about implemention and logic of the structure  program
 * https://en.cppreference.com/w/ :- url for tutorial that used
 *@author Sari Safe
 *@since 05.05.23
 */
#include <cmath>
#include <string>
#include <iostream>
#include "sources\Point.hpp"
#include "sources\Character.hpp"
using std::string;
using namespace ariel;

Character::Character(const string &name, Point &location) : _name(name), _currlocation(location)
{
    // by default by instruction that have 110 points
    this->_points = 110;
    // 0 value of no one
    this->_target = 0;
    // when is created by default that true
    this->_isAlive = true;
}

double Character::distance(const Character *chr)
{
    // get location the other character
    Point *a = &(chr->_currlocation);
    double distance = _currlocation.distance(*a);
    return distance;
}

bool Character::isAlive()
{

    // isnt final impleemntion (pass)
    return true;
}

void Character::print()
{

    // TODO::
    // if alive :name,location, points
}