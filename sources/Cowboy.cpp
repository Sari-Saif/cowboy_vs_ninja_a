
#include "Cowboy.hpp"
#include "Point.hpp"
#include "Character.hpp"
using std::string;
 namespace ariel{

Cowboy::Cowboy(string Cowboy_name, Point point) : _name(Cowboy_name), _point(point)
{
}

double Cowboy::distance(Character *player) const { return 0; };
string Cowboy::getName() { return "sads"; }
Point Cowboy::getLocation() { return Point(); }
string Cowboy::print() { return "hello"; }
void Cowboy::hit(int points) {}
void Cowboy::setName(string name) {}
void Cowboy::shoot(Character *player) {}
bool Cowboy::hashboolts() { return false; }
 };