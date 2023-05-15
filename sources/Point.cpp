/**
 * declare about implemention and logic of the structure  program
 * :url's tutorial:
 * https://en.cppreference.com/w/
 * https://cplusplus.com/reference/cmath/
 *@author Sari Safe
 *@since 15.05.23
 */

#include <iostream>
#include <cmath>
#include <string>
#include <string>
#include "Point.hpp"
using namespace ariel;
using std::cout;
using std::endl;
using std::to_string;

//  ctor
Point::Point(double ix, double iy) : _x(ix), _y(iy), x(to_string(ix)), y(to_string(iy))
{
}

// default ctor
Point::Point() : _x(0), _y(0), x(to_string(0)), y(to_string(0))
{
}

double Point::distance(const Point &other)
{

    double dx = _x - other._x;
    double dy = _y - other._y;
    return sqrt(dx * dx + dy * dy);
};

string Point::print()
{

    cout << "( " + x + ", " + y + ")" << endl;
    string temp = "( " + to_string(_x) + ", " + to_string(_y) + ")";
    return temp;
}

string Point::get_x()
{

    return x;
}

string Point::get_y()
{
    return y;
}