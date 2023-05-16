
#include "Character.hpp"
#include "Ninja.hpp"
#include "Point.hpp"

#include <string>
#include <iostream>
namespace ariel
{

    Ninja::Ninja(string name, Point point) : _location(point)
    {

        this->_name = name;
        // by default
        this->_speed = 0;
    }
    Ninja::Ninja() : _location(Point())
    {
        this->_name = "default ninja ";
    }
    double Ninja::distance(Character *player){ return 0; };
    string Ninja::getName() {}
    Point Ninja::getLocation() {}
    string Ninja::print() { return "hello"; }
    void Ninja::hit(int points) {}
    void Ninja::setName(string name) {}
    void Ninja::move(Character *player) {}
    void Ninja::slash(Character *player) {}
};