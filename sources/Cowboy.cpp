#include "Cowboy.hpp"
#include "Point.hpp"
#include "character.hpp"
using namespace ariel;

Cowboy::Cowboy(string Cowboy_name, Point point) : _name(Cowboy_name), _point(point)
{
}

double Cowboy::distance(Character *player) const { return 0; };
string Cowboy::getName() {}
Point Cowboy::getLocation() {}
string Cowboy::print() { return "hello"; }
void Cowboy::hit(int points) {}
void Cowboy::setName(string name) {}
void Cowboy::shoot(Character *player){}
bool Cowboy::hashboolts(){ return false;}