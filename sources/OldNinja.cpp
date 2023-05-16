#pragma once 
#include "OldNinja.hpp"
#include "Ninja.hpp"
using namespace ariel;

OldNinja::OldNinja(string name, Point point) : Ninja(name, point)
{
}
double OldNinja::distance(Character *player) const { return 0; };
string OldNinja::getName() {}
Point OldNinja::getLocation() {}
string OldNinja::print() { return "hello"; }
