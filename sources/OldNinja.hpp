/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef OLDNINJA_H

#define OLDNINJA_H
#include "Ninja.hpp"
// #include "Character.hpp"
// #include "Point.hpp"
using std::string;
namespace ariel
{

    class OldNinja : public Character, public Ninja
    {
    private:
        string _pname = "old ninja";

    public:
        // ctor
        OldNinja(string, Point);
        double distance(Character *) const;
        string getName();
        Point getLocation();
        string print();
        void hit(int number_hits);
        void setName(string name);
        // methods from character
    };

};
#endif