#include "doctest.h"
#include "Team.hpp"
using namespace ariel;

TEST_CASE(" vercation of distance and move operation ")
{

    Point a(0, 0);
    Point a1(5, 5);
    Point a2(5, 10);
    Point a3(0, 10);
    Point a4(0, 5);
    Point a5(15, 10);

    CHECK(a.distance(a3) == 10);
    CHECK(a.getx() == 0);
    CHECK(a.gety() == 0);
    CHECK(a3.getx() == 0);
    CHECK(a3.gety() == 10);
    CHECK(a.distance(a3) == a1.distance(a2));
    CHECK(a1.getx() == 5);
    CHECK(a1.gety() == 5);
    CHECK(a1.distance(a2) == a2.distance(a3));
    CHECK(a.distance(a3) == a1.distance(a2));
    CHECK(a.distance(a4) == 5);
    CHECK(a1.distance(a2) == a2.distance(a3));

    Point changed = a2.moveTwoards(a1, a);

    CHECK(changed.getx() == 0);
    CHECK(changed.gety() - a2.gety() == -10);
    CHECK(changed.distance(a3) == a2.distance(a5));
}

TEST_CASE("characters and edge cases ")
{
    Point a(0, 0);
    Point a1(5, 5);
    Point a2(5, 10);
    Point a3(0, 10);
    Point a4(0, 5);
    Point a5(55, 5);

    Cowboy *cow = new Cowboy("Wafi", a);
    OldNinja *Oninja = new OldNinja("hadi", a1);
    YoungNinja *Yninja = new YoungNinja("bami", a2);
    TrainedNinja *Tninja = new TrainedNinja("sadi", a3);
    Cowboy *cow_1 = new Cowboy("lior", a4);
    OldNinja *Oninja_1 = new OldNinja("vin", a5);
    YoungNinja *Yninja_1 = new YoungNinja("van", a);
    TrainedNinja *Tninja_1 = new TrainedNinja("baneder", a1);

    CHECK(cow->isAlive() == cow_1->isAlive());
    CHECK(Oninja_1->isAlive() == Oninja->isAlive());
    CHECK(Yninja->isAlive() == Tninja->isAlive());
    CHECK((Oninja_1->getLocation().distance(Oninja->getLocation())) == 50);
    CHECK(Tninja_1->getLocation().distance(cow_1->getLocation()) == 4);

    CHECK(cow_1->getName() == "Wafi");
    CHECK(Yninja_1->getName() != "ahlam");

    CHECK_NOTHROW(cow->move(Tninja_1));
    CHECK_NOTHROW(cow_1->move(Yninja));
}

TEST_CASE("team init and generate ")
{
    Point p(0, 0);
    Point p1(80, 1);
    Point p2(445, 50);
    Cowboy *cow = new Cowboy("mow", p1);
    Cowboy *cow_sec = new Cowboy("mewo", p);
    Team team(cow_sec); // automatic add
    team.add(cow);
    team.add(new Cowboy("vadi", Point(23, 89)));
    team.add(new Cowboy("bana", Point(15, -12)));
    CHECK(team.stillAlive() == 4);
    TrainedNinja *t_ninja = new TrainedNinja("moory", p2);
    Team team_b(t_ninja);
    team.attack(&team_b);
    team.attack(&team_b);
    CHECK_THROWS(team_b.attack(&team_b));
    team.attack(&team_b);
    team.attack(&team_b);
    CHECK(team.stillAlive() == 0);
    CHECK_THROWS(team.attack(&team_b));
}