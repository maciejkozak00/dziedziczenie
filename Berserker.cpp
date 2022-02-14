//
// Created by macie on 14.02.2022.
//

#include "Berserker.h"

Berserker::Berserker(std::string berserker_name, int hp) : Unit(berserker_name, hp)
{

}

int Berserker::attack() {
    if(getHp() > 35)
    {
        return 10;
    }
    else
    {
        return rand() % 30 + 10;
    }
}
