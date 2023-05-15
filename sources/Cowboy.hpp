/**
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Character.hpp"
using std::string;
namespace ariel
{

    class Cowboy : public Character
    {
    private:
        int _hitPoints;
        int number_of_boolts;
        string _name;
        Point _point;

    public:
        // ctor
        Cowboy(string, Point);
        //  methods
        void shoot(const Character *);
        bool hashboolts();
        void reload();
    };

};