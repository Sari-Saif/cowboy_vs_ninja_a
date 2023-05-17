/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef YOUNGNINJA_HPP
#define YOUNGNINJA_HPP

#include "Ninja.hpp"

using std::string;
namespace ariel
{

    class YoungNinja : public Ninja, public Character
    {
    public:
        // ctor
        YoungNinja(string, Point);
        double distance(Character *) const;
        string getName();
        Point getLocation();
        string print();
        void hit(int);
        void setName(string name);
    };
};
#endif // YOUNGNINJA_HPP