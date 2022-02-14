#include "tests.h"

#include <iostream>

#include "Unit.h"
#include "Ogre.h"
#include "Berserker.h"

void testUnit()
{
    Unit u("IMIE", 50);
    assert( u.isAlive() );
    assert( u.attack() == 10 );
    assert( u.getHp() == 50 );
    assert( u.getName() == "IMIE" );
    std::cout << "UNIT CLASS TEST: PASSED" << std::endl;
}

void testOgre()
{
    Ogre u("Shrek", 100);
    assert( u.isAlive() );
    for(int i = 0; i < 100; i++)
    {
        assert( u.attack() >= 1 || u.attack() <= 20 );
    }
    assert( u.getHp() == 100 );
    assert( u.getName() == "Shrek" );
    std::cout << "OGRE CLASS TEST: PASSED" << std::endl;
}

void testBerserker()
{
    Berserker u("Pudzian", 50);
    assert( u.isAlive() );
    assert( u.getHp() == 50 );
    u.getHit(30);
    assert( u.getHp() == 20 );
    assert( u.getName() == "Pudzian" );
    std::cout << "BERSERKER CLASS TEST: PASSED" << std::endl;

}

void testAll()
{
    testUnit();
    testOgre();
    testBerserker();
}