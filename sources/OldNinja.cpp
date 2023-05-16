
#include "OldNinja.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
using namespace ariel;

OldNinja::OldNinja(string name, Point point) : Ninja(name, point)
{
}
OldNinja::~OldNinja() {}
double OldNinja::distance(Character *player) const { return 0; };
string OldNinja::getName() {}
Point OldNinja::getLocation() {}
string OldNinja::print() { return "hello"; }
void OldNinja::hit(int num_hit) {}
void OldNinja::setName(string name) {}
