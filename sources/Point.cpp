/**
 * declare about implemention and logic of the structure  program
 * https://en.cppreference.com/w/ :- url for tutorial that used
 * https://cplusplus.com/reference/cmath/
 *@author Sari Safe
 *@since 05.05.23
 */
#include <iostream>
#include "Point.hpp"
#include <cmath>
#include <string>
using namespace ariel;
using std::cout;
using std::endl;

Point::Point(double x, double y) : _x(x), _y(y)
{
}
Point::Point() : _x(0), _y(0)
{
}

double Point::distance(const Point &other)
{

    double dx = _x - other._x;
    double dy = _y - other._y;
    return sqrt(dx * dx + dy * dy);
};

void Point::print()
{

    cout << "( " << _x << ", " << _y << ")" << endl;
}
