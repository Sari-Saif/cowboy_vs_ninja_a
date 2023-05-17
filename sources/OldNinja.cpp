
#include "OldNinja.hpp"
// #include "Character.hpp"
// #include "Ninja.hpp"
namespace ariel
{

    OldNinja::OldNinja(string name, Point point) : Ninja(name, point)
    {
    }
    double OldNinja::distance(Character *player) const { return 0; };
    string OldNinja::getName() {}
    Point OldNinja::getLocation() {}
    string OldNinja::print() { return "hello"; }
    void OldNinja::hit(int number_hits) {}
    void OldNinja::setName(string name) {}
};