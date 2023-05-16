
#include "YoungNinja.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
using namespace ariel;

YoungNinja::YoungNinja(string name, Point point) : Ninja(name, point)
{
}
double YoungNinja::distance(Character *) const { return 0; };
string YoungNinja::getName() {}
Point YoungNinja::getLocation() { return Point(); }
string YoungNinja::print() { return "ss"; }
void YoungNinja::hit(int num_hit) {}
void YoungNinja::setName(string name) {}