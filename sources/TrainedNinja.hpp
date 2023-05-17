/**
 *
 *@author Sari Safe
 *@since 15.05.23
 */
// to dont include the header alot, once at most
#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP
#include "Ninja.hpp"

using std::string;
namespace ariel
{

    class TrainedNinja : public Ninja, public Character
    {
    public:
        TrainedNinja(string, Point);
    };
};
#endif // TRAINEDNINJA_HPP