//
// Created by macie on 13.02.2022.
//

#include "Unit.h"

#include <utility>

Unit::Unit(std::string unit_name, const int &unit_hp) : name(unit_name), hp(unit_hp)
{

}

int Unit::attack() {
    return 1;
}

bool Unit::isAlive() {
    return hp > 0;
}

int Unit::getHp() {
    return hp;
}

std::string Unit::getName() {
    return name;
}

void Unit::getHit(int dmg)
{
    hp = hp - dmg;
}
