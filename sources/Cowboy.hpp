/**
 *
 *@author Sari Safe
 *@since 05.05.23
 */
// to dont include the header alot, once at most
#pragma once
namespace ariel
{

    class Cowboy
    {
    private:
        int _boolts;

    public:
        // ctor
        Cowboy(const string&,Point&);

        //  methods
        bool hashboolts();
        void reload();
    };

};