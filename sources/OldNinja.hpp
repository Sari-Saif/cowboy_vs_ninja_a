/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Character.hpp"
namespace ariel
{

    class OldNinja : public Ninja
    {
    private:

    public:
        OldNinja(string, Point);
        void slash(Cowboy *);
        void move(Cowboy *);
    };

};