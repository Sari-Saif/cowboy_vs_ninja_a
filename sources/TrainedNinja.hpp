/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#pragma once
#include "Character.hpp"
#include "Ninja.hpp"
#include "Point.hpp"
namespace ariel
{
    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(string, Point);
    };

};