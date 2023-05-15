/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Character.hpp"
#include "Ninja.hpp"
namespace ariel
{
    class YoungNinja : public Ninja
    {

    public:
        // ctor
        YoungNinja(string, Point);
    };
};