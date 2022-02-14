//
// Created by macie on 14.02.2022.
//

#include <iostream>
#include "ArenaManager.h"

ArenaManager::ArenaManager(Unit &u1, Unit &u2) : player1(u1), player2(u2)
{

}

void ArenaManager::fight()
{
    std::cout << player1.getName() << " HP:" << player1.getHp() << std::endl;
    std::cout << player2.getName() << " HP:" << player2.getHp() << std::endl;

    while (player1.isAlive() && player2.isAlive())
    {
        int dmg1 = player1.attack();
        int dmg2 = player2.attack();

        std::cout << player1.getName() << " HP:" << player1.getHp() << " DMG:" << dmg1 << std::endl;
        std::cout << player2.getName() << " HP:" << player2.getHp() << " DMG:" << dmg2 << std::endl;

        player1.getHit(dmg2);
        player2.getHit(dmg1);
    }
    if(player1.isAlive())
    {
        std::cout << player1.getName() << std::endl;
    }
    else if(player2.isAlive())
    {
        std::cout << player2.getName() << std::endl;
    }
    else
    {
        std::cout << "GRAVEDIGGER" << std::endl;
    }
}
