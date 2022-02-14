#include <iostream>
#include "tests.h"
#include "ArenaManager.h"
#include "Berserker.h"
#include "Ogre.h"

#include "time.h"

int main()
{
    srand(time(0));
    Ogre o("Shrek", 100);
    Berserker b("Pudzian", 50);
    ArenaManager man(o, b);

    man.fight();
}