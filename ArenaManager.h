//
// Created by macie on 14.02.2022.
//

#ifndef DZIEDZICZENIE_ARENAMANAGER_H
#define DZIEDZICZENIE_ARENAMANAGER_H

#include "Unit.h"

class ArenaManager {
    Unit &player1;
    Unit &player2;

public:
    ArenaManager(Unit &u1, Unit &u2);

    void fight();

};


#endif //DZIEDZICZENIE_ARENAMANAGER_H
