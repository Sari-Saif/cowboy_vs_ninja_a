
#include "Ninja.hpp"
#include "Point.hpp"
using namespace ariel;

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