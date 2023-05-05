/**
 *
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
namespace ariel
{
    class Point
    {
    private:
        // cordinates for Piont
        double _x;
        double _y;

    public:
        // ctor
        Point(double, double);

        // default ctor
        Point();
        // properties
        double distance() const;
        void printPont();
        Point moveTwoards();
    };

};