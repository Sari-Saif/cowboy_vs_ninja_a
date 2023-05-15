/**
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include <iostream>
#include "Point.hpp"
#include <cmath>
#include <string>
using std::string;
using std::to_string; 
namespace ariel
{
    class Point
    {
    private:
        // cordinates for Piont
        double _x;
        double _y;
        const string &x;
        const string &y;

    public:
        // ctor
        Point(double, double);

        // default ctor
        Point();
        // properties
        double distance(const Point &);
        //void
        string print();

        // getter's (string value's)
        string get_x();
        string get_y();
        // Point moveTwoards(); -> will make change and rewrite it
    };

};